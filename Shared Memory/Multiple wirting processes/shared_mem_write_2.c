#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/shm.h>
main()
{
	int count=20,i;
	char *p,alpha='a';
	int id;
	id=shmget(5,50,IPC_CREAT|0644);
	p=shmat(id,0,0);
	for(i=0;i<=count;alpha++,i++)
	{
		*p=alpha;
		p++;
		sleep(1);
	}
}
