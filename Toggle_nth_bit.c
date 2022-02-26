
#include<stdio.h>

void toggle_nth_bit(int ,int )
{
  	x = x ^ (0x1<<n);
	printf("value of x=%d\n",x);
}

int main()
{
	int x,n;
  	printf("Enter a number: ");
  	scanf("%d",&x);
	printf("Enter nth bit\n");
	scanf("%d",&n);
	toggle_nth_bit(x,n);
	return 0;
}
