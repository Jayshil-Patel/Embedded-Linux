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
		char msg_txt[20];
	};
void main()
{
	struct msgbuf v;
	int id;
	id=msgget(9,0644);
	printf("%d\n",id);
	v.m_type=0;
	msgrcv(id,v.msg_txt,sizeof(v.msg_txt),v.m_type,0);
	perror("msgrcv");
	printf("%s\n",v.msg_txt);
}