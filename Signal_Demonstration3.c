#include<signal.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
    // changing default action of particular signal
    signal(SIGINT,SIG_IGN);
    signal(SIGINT,SIG_IGN);
    while (1)
    {
        printf("I am in an infinite loop");
        printf("You cannot kill me by SIGINT <2> or SIGFPE <8>\n");
        //signal number 2, 8 will not be able to kill this process
        //hence these signals are ignored
        sleep(2);
    }
    return 0;
    
}
