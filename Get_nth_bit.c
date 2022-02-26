
#include<stdio.h>

void get_n_bit(int x,int n)
{
  	if(x & 0x1<<n)
 	{
		printf("%d th bit is 1\n",n);
  	}
	else
  	{
		printf("%d th bit is 0t\n",n);
  	}
}

int main()
{
	int x,n;
  	printf("Enter a number: ");
 	scanf("%d",&x);
	printf("Enter nth bit\n");
	scanf("%d",&n);
	get_n_bit(x,n);
	return 0;
}

