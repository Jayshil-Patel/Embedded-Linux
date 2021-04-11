#include<signal.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
    printf("I am a running process!\n");
    sleep(1);
    printf("I am going to divide a number with zero!\n");
    int a=3,b=3;
    
    
    float ans = 54/(a-b);
    //This state ment will generate exception (Floating Point exception)
    //and generate sigFPE and make core dump file
    
    
    printf("I wont be executed!!");
    return 0;
}