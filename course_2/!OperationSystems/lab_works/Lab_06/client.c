#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <errno.h>
#include <stdbool.h>
#include <unistd.h>

#define SIZEMEM 4096

int main()
{
	key_t key;
	int *shm;
	int shmid;
	int flg = 1, i = 0, j;
	char pathname[] = "serv.c";
	char temp;
	

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
			
			flg = 0;
		}
	}

	if ((shm = (int *)shmat(shmid, NULL, 0)) == (int *)(-1))
	{
		printf("Не удаётся использовать разделяемую память\n");
		exit(-1);
	}

	temp = 'A';
	for(i = 4; i < 7; i++)
	{
		(*((char *)(shm + i))) = temp;
	}
	
	*shm = (*shm) + 3;
	sleep(3);
	
	
	temp = 'B';
	j = i + 3;
	for(i; i < j; i++)
	{
		(*((char *)(shm + i))) = temp;
	}

	*shm = (*shm) + 3;
	sleep(5);
	
	temp = 'C';
	j = i + 3;
	for(i; i < j; i++)
	{
		(*((char *)(shm + i))) = temp;
	}

	*shm = (*shm) + 3;
	sleep(5);


	*shm = (-1);

	if (shmdt(shm) < 0)
	{
		printf("Не возможно отключить разделяемую память\n");
		exit(-1);
	}

	return 0;
}
