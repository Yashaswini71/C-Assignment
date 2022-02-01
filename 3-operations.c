#include<stdio.h>
void calculator()
{
	int a,b;
	printf("Enter A & b\n");
	scanf("%d%d",&a,&b);
	printf("ADD:%d\n",a+b);
	printf("SUB:%d\n",a-b);
	printf("MULTIPLY :%d\n",a*b);
	printf("Divide :%d\n",a/b);
	printf("MODULOS :%d\n",a%b);
	return ;
}
void lowcase_to_uppcase()
{
	char ch;
	printf("Enter character\n");
	scanf(" %c",&ch);
	if(ch>=97 && ch <=122)
		printf("Upper case %c\n",ch-32);
	return ;
}
void compare()
{
	int a,b;
	printf("Enter a & b value\n");
	scanf("%d%d",&a,&b);
	(a>b)?printf("A =%d is Big\n",a):printf("B = %d is big\n",b);
	return ;
}
void size()
{
	printf("Integer : %ld\n",sizeof(int));
	printf("Long double :%ld\n",sizeof(long double));
	printf("Character : %ld\n",sizeof(char));
	return ;
}
int main()
{
	int choice,a=1;
	printf("Enter choice\n");
	while(a)
	{
	printf("1.Calculator\n");
	printf("2.lowercase to uppercase\n");
	printf("3.compare two numbers\n");
	printf("4.comma operator\n");
	printf("5.sizeof operator\n");
	printf("6.exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			calculator();
			break;
		case 2:
			lowcase_to_uppcase();
			break;
		case 3:
			compare();
			break;
		case 4:
			{
				a=1,2,3;
				printf("Comma operator a=1,2,3 output is %d\n",a);
			}
			break;
		case 5:
			size();
			break;
		case 6:
			a=0;
	}	
	}
	return 0;
}
