//Файл "server.c"

#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>

#define SIZEMEM 4096

int main()
{
	key_t key;
	int *shm;
	int shmid;
	int left, right, i = 4;
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
			if ((shmid = shmget(key, SIZEMEM, 0)) < 0)
			{
				printf("Не удаётся найти разделяемую память\n");
				exit(-1);
			}
		}
	}

	if ((shm = (int *)shmat(shmid, NULL, 0)) == (int *)(-1))
	{
		printf("Не удаётся использовать разделяемую память\n");
		exit(-1);
	}

	left = *shm;
	
	while(true)
	{
		right = *shm;
	
		if(-1 == *shm)
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
			if(left != right)
			{
				i = 4;
				while( (*((char *)(shm + i))) || (i > SIZEMEM) )
				{
					printf("%c", *((char *)(shm + i)));
					i = i + 1;
				}
				
				left = right;
				printf("\n\r");
			}
		}
		
	}
}
