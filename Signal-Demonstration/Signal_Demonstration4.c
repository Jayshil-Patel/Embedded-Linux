#include<signal.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main (){
    signal(SIGINT,SIG_IGN);
    signal(SIGFPE,SIG_IGN);
    while (1)
    {
        printf("I am in an infinite loop\n");
        printf("You cannot kill me by SIGINT <2> or SIGFPE <8>\n");
        sleep(2);
        
        kill(getpid(),2);
        kill(getpid(),8);
        // these two kill commands are ineffective, we have ignored them
        printf("sigfpe and sigint ignored\n");
    }
    return 0;
}