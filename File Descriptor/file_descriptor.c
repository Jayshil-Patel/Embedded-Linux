#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

void main(){
    int fd,num;
    char str[30];
    close(1);
    //blocking all output, hence no output
    fd=open("data",O_RDONLY | O_CREAT);
    //If file does not exists then the file will be created
    perror("open");
    //will return error message
    scanf("%d",&num);
    printf("num = %d\n",num);
    printf("fd = %d\n",fd);
    //prints FD number
}