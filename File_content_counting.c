
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	int character=0,word=0,lines=0;
	if((fp=fopen("hello.txt","r"))==NULL)
	{
		printf("Error to opening a file\n");
		exit(1);
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			character++;
			if(ch=='\n' || ch=='\0')
				lines++;
			if(ch=='\n' || ch=='\0'||ch==' ' || ch=='\t')
				word++;
		}
	}
	printf("Count no of charcters in a file: %d\n",character);
	printf("Count no of word in a file: %d\n",word);
	printf("Count no of lines in a file: %d\n",lines);
	fclose(fp);
	return 0;
}
