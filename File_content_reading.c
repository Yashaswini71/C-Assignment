
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	int i;
	char str[1000];
	scanf("%[^\n]s",str);
	if((fp=fopen("hello.txt","w"))==NULL)
	{
		printf("Error is to opening\n");
	}
	else
	{
		for(i=0;str[i]!='\0';i++)
			putc(str[i],fp);
	}
	fclose(fp);
	return 0;
}
