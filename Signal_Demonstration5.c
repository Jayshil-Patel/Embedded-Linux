#include<signal.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void myhandler(int signum){
    printf("\nHey, I got the signal: %d\n\n",signum);
    // kill -2 /*process ID*/
    // this kill will not kill the process
    // insted it will print this message!

}

int main(){
    signal(SIGINT, &myhandler);
    while (1)
    {
        printf("I am in an infinite loop!\n");
        sleep(2);
    }
    return 0;
}
