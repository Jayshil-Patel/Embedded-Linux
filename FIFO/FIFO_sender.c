//#include<stdio.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

void main()
{
	int fd;
	char temp[30];
	mkfifo("file1",0644);
	fd=open("file1",O_WRONLY);
	printf("enter data to transmit:- ");
	scanf("%s",temp);		
	write(fd,temp,strlen(temp)+1);
	sleep(1);
	
}
