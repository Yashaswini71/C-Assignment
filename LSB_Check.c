
#include<stdio.h>
int main()
{
	int n;
  	printf("Enter a number: ");
 	scanf("%d",&n);
	if(n & 0x01)
  	{
		printf("LSB bit is set\n");
  	}
	else
  	{
		printf("LSB bit is not set\n");
  	}
	return 0;
}
