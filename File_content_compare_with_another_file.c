
#include<stdio.h>
#include<stdlib.h>

void compareFiles(FILE *fp1, FILE *fp2)
{
    	char ch1 = getc(fp1);
    	char ch2 = getc(fp2);
    	int error = 0, pos = 0, line = 1;
    	while (ch1 != EOF && ch2 != EOF)
    	{
        		pos++;
        		if (ch1 == '\n' && ch2 == '\n')
        		{
            			line++;
            			pos = 0;
        		}
        		if (ch1 != ch2)
        		{
            			error++;
            			printf("Line Number : %d \tError Position : %d \n", line, pos);
        		}
        		ch1 = getc(fp1);
        		ch2 = getc(fp2);
	}
	printf("Total Errors : %d\t", error);
}

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
	compareFiles(sfp,dfp);
	fclose(sfp);
	fclose(dfp);
	return 0;
}