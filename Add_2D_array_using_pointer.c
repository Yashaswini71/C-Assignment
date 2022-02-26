
5. Write a C program to add 2D array using pointers.

#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter no of rows: ");
    scanf("%d",&m);
    printf("Enter no of columns: ");
    scanf("%d",&n);
    int a[m][n],b[m][n],c[m][n];
    int *x,*y,*z,i,j;
    x=a;y=b;z=c;
    printf("Enter elements in an array1: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",((x+i)+j));
            printf("%d\t",*(*(x+i)+j));
        }
        printf("\n");
    }
    printf("\n");
    printf("Enter elements in an array2: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",((y+i)+j));
            printf("%d\t",*(*(y+i)+j));
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            *(*(z+i)+j)=(*(*(x+i)+j))+(*(*(y+i)+j));
        }
    }
    printf("Addtion of two arrays: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",*(*(z+i)+j));
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
