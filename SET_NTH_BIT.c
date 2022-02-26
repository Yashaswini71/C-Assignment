
4. Write a C program to set nth bit of a number.

#include<stdio.h>

void set_nth_bit(int x,int n)
{
  	x = x | (0x1<<n);
  	printf("value of x=%d\n",x);
}

int main()
{
  	int x,n;
  	printf("Enter a number: ");
  	scanf("%d",&x);
	printf("Enter nth bit\n");
	scanf("%d",&n);
  	set_nth_bit(x,n);
 	 return 0;
}
