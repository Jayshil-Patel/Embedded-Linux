#include<signal.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
    printf("After 5 seconds I will get a SIGHUP signal\n");
    sleep(5);
    kill(getpid(),1);
    // generate  signal by instruction using kill system call
    // Now this process is going to kill itself
    printf("This will not be printed");
    return 0;
}
