#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

int c=0;
//int BOOL=1;
void *thread_1(void *arg)
{
	printf("INT=%d\n",*(int*)arg);
	while(1)
	{
		c++;
		printf("In thread 1\n");
		sleep(1);
	}
	pthread_exit(&c);
}

void main()
{
	pthread_t tid1;
	int i=10;
	void *c;
	pthread_create(&tid1,NULL,thread_1,&i);
	printf("In main thread\n");
	sleep(5);
//	BOOL=0;
	pthread_join(tid1,&c);
	printf("ret val=%d\n",*(int*)c);
}
