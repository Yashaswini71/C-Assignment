#include<stdio.h>

void Mystrcpy(char *s2,char *s1)
{
    int len=0;
    while((*s2++=*s1++)!='\0')
    {
      len++;
    }
    printf("length of string: %d\n",len);
}

int main()
{
    char str1[1000],str2[1000];
    printf("Enter a string:");
    scanf("%[^\n]s",str1);
    Mystrcpy(str2,str1);
    printf("string copy str2<--str1: %s\n",str2);
    return