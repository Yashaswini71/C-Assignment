
#include<stdio.h>

int sum(int );
int main()
{
	int n,x;
	printf("Enter a range: ");
	scanf("%d",&x);
	n=sum(x);
	printf("sum of %d numbers: %d\n",x,n);
	return 0;
}

int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	return (n+sum(n-1));	
}
