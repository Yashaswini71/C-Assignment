
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *sfp,*dfp;
	char ch;
	if((sfp=fopen("abc.txt","r"))==NULL)
	{
		printf("Error to open a file\n");
		exit(1);
	}
	if((dfp=fopen("xyz.txt","w"))==NULL)
	{
		printf("Error to open a file\n");
                exit(1);

	}
	while((ch=fgetc(sfp))!=EOF)
		fputc(ch,dfp);
	fclose(sfp);
	fclose(dfp);
	return 0;
}
