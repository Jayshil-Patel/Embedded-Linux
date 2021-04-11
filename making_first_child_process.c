#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>
int main(){
    int id ;
    id = fork();
    // while(1){
    //     printf("\n%d",id); 
    //     //0 will be printed by child process
    //     //and positive int number will be printed by parent process
    //     //the int value is PID of child
    //     sleep(2);
    // }
    if (id !=0){
        while(1){
            sleep(1);   
            printf("\nThis Parent process PID :%d",id);
            
        }
    }
    else{
        while (1){
            sleep(1);
            printf("\nThis is child process PID :%d",id);
            
        }
    }

}