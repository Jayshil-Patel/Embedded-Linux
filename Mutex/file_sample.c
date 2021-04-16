#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp;
	char name[10];
	int age;
	if((fp=fopen("rec","w"))==NULL)
	{
		printf("error in opening file\n");
		exit(1);
	}
	printf("Enter your age & name:");
	scanf("%s %d",name,&age);
	fprintf(fp,"my name is %s and age is %d",name,age);
	fclose(fp);
	return 0;
}

