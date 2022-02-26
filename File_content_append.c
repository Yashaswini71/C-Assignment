
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char str[1000];
	int i;
	scanf("%[^\n]s",str);
	if((fp=fopen("hello.txt","a"))==NULL)
	{
		printf("Error to opening a file\n");
		exit(1);
	}
	else
	{
		for(i=0;str[i]!='\0';i++)
			putc(str[i],fp);
	}
	fclose(fp);
	return 0;
}
