#include<signal.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
    printf("After 5 seconds I will get a SIGHUP signal\n");
    sleep(5);
    kill(getpid(),1);
    printf("This will not be printed");
    return 0;
}