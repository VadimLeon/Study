//Файл client.c

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <errno.h>
#include <stdbool.h>
#include <unistd.h>

#define SIZEMEM 8192

int main()
{
	key_t key;
	int *shm;
	int shmid;
	int flg = 0, i = 0, n, k;
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
		}
	}

	if ((shm = (int *)shmat(shmid, NULL, 0)) == (int *)(-1))
	{
		printf("Не удаётся использовать разделяемую память\n");
		exit(-1);
	}
	
	n = 10 + (rand() % 11);
	*(shm + 1) = n;
	
	for(i = 0; i < n; i++)
	{
		k = rand();
		*(shm + 2 + i) = k;
	}

	n = *(shm + 1);
	printf("Count numbers: %d\n\r Numbers: ", n);

	for(i = 0; i < n; i++)
	{
		printf("%d, ", *(shm + 2 + i));
	}
	printf("\n\r\n");
	
	*shm = 1;

	while(!flg)
	{
		k = *shm;

		if(k == 2)
		{
			n = *(shm + 1);
			
			printf("Count numbers: %d\n\rNumbers: ", n);
			for(i = 0; i < n; i++)
			{
				printf("%d, ", *(shm + 2 + i));
			}
			
			flg = 1;
		}
	}
	printf("\n\r");

	*shm = -1;
	
	if (shmdt(shm) < 0)
	{
		printf("Не возможно отключить разделяемую память\n");
		exit(-1);
	}

	return 0;
}
