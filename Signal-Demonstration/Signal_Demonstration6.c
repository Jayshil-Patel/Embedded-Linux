#include<signal.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


void sigint_handler(int signum)
{
	printf("\nHey , I got the SIGINT: %d\n\n",signum);
}

void sigquit_handler(int signum)
{
	printf("\nHey , I got the SIGQUIT: %d\n\n",signum);
}

void sigtstp_handler(int signum)
{
	printf("\nHey , I got the SIGTSTP: %d\n\n",signum);
}

int main(){
	signal(SIGINT,&sigint_handler);     // signal no 2 CTRL+C
	signal(SIGQUIT,&sigquit_handler);   // signal no 3 CTRL+D
	signal(SIGTSTP,&sigtstp_handler);	//signal no 20
	
	while(1){
		printf("I am in an infinite loop!\n");
		sleep(1);
		}
	return 0;
}
