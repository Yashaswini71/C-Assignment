
#include<stdio.h>
int main()
{
	int n;
  	printf("Enter a number: ");
  	scanf("%d",&n);
	if(n & 0x80000000)
  	{
		printf("MSB bit is set\n");
  	}
	else
  	{
		printf("MSB bit is not set\n");
  	}
	return 0;
}
