
2. Write a C program to copy one array to another using pointers.

#include<stdio.h>

void copy_array(int *,int *,int n)
{
  int i;
  printf("Copy of one array to another array *ptr2<---ptr1: ");
    for(i=0;i<n;i++)
    {
        *(ptr2+i)=*(ptr1+i);
        printf("%d  ",*(ptr2+i));
    }
    printf("\n");
}

int main()
{
    int a[1000],b[1000],n,i;
    int *ptr1,*ptr2;
    ptr1=a;
    ptr2=b;
    printf("Enter no of elements in an array: ");
    scanf("%d",&n);
    printf("Enter elements in an array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr1+i));
    }
    printf("Elements in an array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr1+i));
    }
    printf("\n");
    copy_array(ptr2,ptr1,n);
    return 0;
}
