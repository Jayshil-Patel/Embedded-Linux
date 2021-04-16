#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

pthread_t tid[2];

void *fun(void *arg)
{
	unsigned long i=0;
	pthread_t id = pthread_self();
	if(pthread_equal(id,tid[0]))
	{
		printf("\nFirst thread processing\n");
	}
	else //if (pthread_equal(id,tid[1]))
	{
		printf("\nSecond thread processing\n");
	}
	for(i=0;i<(0xFFFFFFFF);i++);
	return NULL;
}

int main(void)
{
	int i=0;
	int err;
	while(i<2)
	{
		err=pthread_create(&tid[i],NULL,&fun,NULL);
		if(err!=0)
			printf("\ncan't create thread:[%s]",strerror(err));
		else
			printf("\nThread %d created successfully\n",i);
		i++;
	}
	sleep(5);
	return 0;
}

