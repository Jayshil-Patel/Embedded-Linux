#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
int main(){
    if(fork()==0){
        printf("Hello from child\n");
        exit(0);
    }
    else{
        printf("Hello form Parent\n");
        wait(NULL);
        printf("The child has been terminatated\n");
    }
   printf("Bye\n");
   return 0;
}