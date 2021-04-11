#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

void waitexample(){
    int i,stat;
    pid_t pid[50];
    for ( i = 0; i < 5; i++)
    {
        if ((pid[i]=fork())==0)
        {
            sleep(1);
            exit (100+i);
        }
        
    }
    //Using waitpid() func and printing exit status
    //of child
    for ( i = 0; i < 5; i++)
    {
        pid_t cpid = waitpid(pid[i],&stat,0);
        if(WIFEXITED(stat)){
            printf("Child :%d terminated with status :%d\n",cpid,WEXITSTATUS(stat));
        }
    }
    
    
}
int main(){
    waitexample();
    return 0;
}