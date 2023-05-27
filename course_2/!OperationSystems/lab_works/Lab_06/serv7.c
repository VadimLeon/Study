//Файл "server.c"

#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>

#define SIZEMEM 8192

int cmp(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	key_t key;
	int *shm;
	int shmid;
	int left, k, i = 0;
	int flg = 1;
	char pathname[] = "serv.c";

	if ((key = ftok(pathname, 0)) < 0)
	{
		printf("Не возможно создать ключ\n");
		exit(-1);
	}

	if ( (shmid = shmget(key, SIZEMEM, 0666 | IPC_CREAT | IPC_EXCL)) < 0 )
	{
		if (errno != EEXIST)
		{
			printf("Не возможно создать разделяемую память\n");
			exit(-1);
		}
		else
		{
			printf("Server is already running.\n");
			exit(-1);
		}
	}

	if ((shm = (int *)shmat(shmid, NULL, 0)) == (int *)(-1))
	{
		printf("Не удаётся использовать разделяемую память\n");
		exit(-1);
	}
	
	*shm = 0;
	
	while(true)
	{
		left = *shm;
	
		if(-1 == left)
		{
				if (shmdt(shm) < 0)
				{
					printf("Не возможно отключить разделяемую память\n");
					exit(-1);
				}
				else
				{			
					shmctl(shmid, IPC_RMID, NULL);
					return 0;
				}
			
		} else
		{
			if(left == 1)
			{
				k = *(shm + 1);
				
				qsort((shm + 2), k, sizeof(int), cmp );
				
				*shm = 2;
			}
		}
	}
}
