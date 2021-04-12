#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/msg.h>
struct msgbuf
	{
		long m_type;
		char msg_txt[10];
	};
void main()
{
	struct msgbuf v;
	int id;
	id=msgget(9,IPC_CREAT|0644);
	// api to create message queue
	// there are many message queue running so we nee token
	printf("%d\n",id);
	printf("enter your data to send..\n");
	scanf("%s",v.msg_txt);
	v.m_type=2;
	msgsnd(id,v.msg_txt,strlen(v.msg_txt)+1,0);
	// (queue id,text to send, size of message,message flag)
	perror("msgsnd");
}
