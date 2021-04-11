#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<sys/stat.h>
#include<sys/types.h>

void main(){
    int p[2],q[2];
    pipe(p);
    pipe(q);
    if(fork()){
        char s1[10],s2[10];
        printf("Enter string to send to child\n");
        scanf("%s",s1);
        write(p[1],s1,strlen(s1)+1);
        read(q[0],s2,sizeof(s2));
        printf("\nString received from child = %s\n",s2);

    }
    else{
        char str1[10],str2[10];
        read(p[0],str2,sizeof(str2));
        printf("Enter string to send to parent\n");
        scanf("%s",str1);
        write(q[1],str1,strlen(str1)+1);
        printf("\nstring received form parent = %s\n",str2);

    }
}