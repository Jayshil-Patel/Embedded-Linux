#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

void *thread_1(void *arg)
{
	printf("INT=%d\n",*(int*)arg);
	while(1)
	{
		printf("In thread 1\n");
		sleep(1);
	}
}

void main()
{
	pthread_t tid1;
	int no=10;
	pthread_create(&tid1,NULL,thread_1,&no);
	while(1)
	{
		printf("In main thread\n");
		sleep(1);	
	}
}
