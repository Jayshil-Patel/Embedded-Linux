#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
void main()
{
	int fd;
	char temp2[30];
	mkfifo("file1",0644);
	fd=open("file1",O_RDONLY);
	printf("received data:- ");
    read(fd,temp2,strlen(temp2));
	printf("%s\n",temp2);
	sleep(1);
	
}
