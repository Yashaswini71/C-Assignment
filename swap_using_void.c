1. WAP for swapping between any data type using swap(void *a,void *b) api
#include<stdio.h>

void swap(void *a,void *b)
{
    void *c;
*(int *) c=*(int *) a;
*(int *) a=*(int *) b;
*(int *) b=*(int *) c;
    printf("After swap : A =%d,B=%d\n",*(int*)a,*(int*)b);
    return ;
}

int main()
{
    int a=439,b=451;
    printf("Before swap : A = %d , B =%d\n",a,b);
    swap(&a,&b);
    return 0;
}