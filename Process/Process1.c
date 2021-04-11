#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

void main(){
    int id;
    //fork system call is used to create two identical coples of parent process and a child process

    if(fork()){
        while (1){
            //getpid() is used to retrieve the process ID assignd to process
            printf("In parent : %d\n",getpid());
            sleep(5);
        }
        
    }
    else{
        while (1){
            printf("In child : %d\n",getpid());
            sleep(5);
        }
        
    }
}