
#include<stdio.h>

int sum=0,r;

int rev_num(int n)
{
	if(n)
	{
		r=n%10;
		sum=sum*10+r;
		rev_num(n/10);
	}
	else
	{
		return sum;
	}
	return sum;
}

int main()
{
	int n,x;
	printf("Enter a number: ");
	scanf("%d",&n);
	x=rev_num(n);
	printf("Reverse of a number: %d\n",x);
	return 0;
}
