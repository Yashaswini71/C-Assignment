
#include<stdio.h>

void swap_two_num(int x,int y)
{
  	x=x^y;
	y=x^y;
	x=x^y;
	printf("After Swap : %d %d\n",x,y);
}

int main()
{
	int x,y;
  	printf("Enter two numbers: ");
  	scanf("%d%d",&x,&y);
	printf("Before Swap : %d %d\n",x,y);
	swap_two_num(x,y);
	return 0;
}
