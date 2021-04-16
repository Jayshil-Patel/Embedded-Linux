#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

int c=0;
void *thread_1(void *arg)
{
	printf("INT=%d\n",*(int*)arg);
	while(1)
	{
		c++;
		printf("In thread 1\n");
		sleep(1);
		if(c==10)
		{
			break;
		}
	}
	pthread_exit(&c);
}

void main()
{
	pthread_t tid1,tid2;
	int i=10;
	void *c;
	pthread_create(&tid1,NULL,thread_1,&i);
	printf("In main thread\n");
	pthread_join(tid1,&c);
	printf("ret val=%d\n",*(int*)c);
}
