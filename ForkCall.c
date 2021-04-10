#include<signal.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
    
    pid_t cpid = fork();    // fork will return 0 to cpid
    if(cpid == 0){          // child will get 0 as cpid
        for(;;){
            printf("I am child in an infinite loop\n");
            sleep(1);
        }
    }
    else{                  // parent will get >0 as cpid
        sleep(10);
        kill(cpid , SIGSEGV);
        printf("I have killed my child....Bye\n");
        exit(0);           // This will exit the program
    }
}
