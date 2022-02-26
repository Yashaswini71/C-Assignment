
 #include<stdio.h>

 void sort_array(int *ptr,int n)
 {
   int i,j,temp;
   for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(*(ptr+j)>*(ptr+j+1))
            {
                temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
            }
        }
    }
    printf("After sorting the elements in an array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\n");
 }

 int main()
 {
    int a[100],n,i,j;
    int *ptr;
    ptr=a;
    printf("Enter no of elements in an array: ");
    scanf("%d",&n);
    printf("Enter elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("Before sorting the elements in an array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\n");
    sort_array(ptr,n);
    return 0;
 }
