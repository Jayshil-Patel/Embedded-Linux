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
	int id;
	char *p;
	id=shmget(5,50,IPC_CREAT|0644);
	p=shmat(id,0,0);
	//printf("enter your message");
//	scanf("%s",p);
	printf("%s\n",p);
}
