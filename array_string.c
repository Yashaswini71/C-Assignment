1. Write a C program to copy all elements from an array toanother array. - char/ int - any one

#include<stdio.h>
#define N 100
void array_cpy(int a1[], int a2[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
	}	
	for(i=0;i<n;i++)
	{
		a2[i]=a1[i];
	}
	printf("Copy of elements in arr2[]<--arr1[]: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a2[i]);
	}
	printf("\n");
	return 0;
}

int main()
{
	int arr1[N],arr2[N],n;
	printf("Enter size of an array: ");
	scanf("%d",&n);
	int array_cpy(arr1,arr2,n);
	return 0;
}
2. Write a C program to insert and delete an element in an array at specified position - write fns insert(n),
delete(n) where n is specfied position taken from user

#include<stdio.h>
#define N 100

void insert(int a[],int pos,int ele,int n)
{
	int i,j;
	for(j=n;j>=pos;j--)
	{
		a[j]=a[j-1];
	}
	a[pos--]=ele;
	printf("After inserted element in an array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}

void delete(int a[],int pos,int n)
{
	int i;
	if(pos>=n+1)
	{
		printf("Deletion is not possible\n");
	}
	else
	{
		for(i=pos-1;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		printf("After deletion element in an array: \n");
		for(i=0;i<n-1;i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\n");
	}
}

int main()
{
	int a[N],i,n,pos1,ele,pos2;
	printf("Enter a size of an array: ");
	scanf("%d",&n);
	printf("Enter a elements in an array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a position for insert element in an array: ");
	scanf("%d",&pos1);
	printf("Enter a elements for insert in an array: ");
	scanf("%d",&ele);
	insert(a,pos1,ele,n);
	printf("Enter a position for delete element in an array: ");
	scanf("%d",&pos2);
	delete(a,pos2,n);
	return 0;
}

3. Write a C program to count frequency of each element in an array.

#include<stdio.h>
#define N 100
void count_frequency(int a[], int b[],int n)
{
	i,j,count=0;
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				b[j]=0;
			}
		}
		if(b[i]!=0)
			b[i]=count;
	}
	printf("Count frequency of element in an array: \n");
	for(i=0;i<n;i++)
	{
		if(b[i]!=0)
			printf("frequency of %d: %d times\n",a[i],b[i]);
	}
	return 0;
}

int main()
{
	int a[N],b[N],i,n,count=0;
	printf("Enter size of an array: ");
	scanf("%d",&n);
	printf("Enter elements in array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=-1;
	}
	count_frequency(a,b,n)
	return 0;
}

4. Write a C program to find maximum and minimum element in an array.

#include<stdio.h>
#define SIZE 1000

void maximum_and_minimum(int a[],int n)
{
	i,j,max,min,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
			max=a[i];
		else if(min>a[i])
			min=a[i];
	}
	printf("Maximum element in an array: %d\n",max);
	printf("Minimum element in an array: %d\n",min);
	return 0;
}

int main()
{
	int a[SIZE],i,n;
	printf("Enter a range of array: ");
	scanf("%d",&n);
	printf("printf elements in an array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	maximum_and_minimum(a,n)
	return 0;
}

5. Write a C program to check whether a string is palindrome or not.

void string_palindrome(char s1[])
{
    char s2[100],temp;
    int i=0,j=0,l=0,flag;
    for(i=0;s1[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    printf("%s\n",s2);
    for(i=0,j=l-1;i<l/2;i++,j--)
    {
        temp=s1[i];
        s1[i]=s1[j];
        s1[j]=temp;
    }
    printf("Reverse of string: %s\n",s1);
    for(i=0;i<l;i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("%s is palindrome\n",s2);
    }
    else
    {
        printf("%s is not a palindrome\n",s2);
    }
    return 0;
}

int main()
{
    char s1[100];
    printf("\nEnter a string\t");
    scanf("%s",s1);
    string_palindrome(s1)
    return 0;
}

6. Write a C program to find first occurrence of a word in a given string.
#include<stdio.h>

void find_first_word(char str[],char find[])
{
	int i,index,found=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==find[0])
		{
			index=0;
			found=1;
			for(index=1;find[index]!='\0';index++)
			{
				if(str[i+index]!=find[index])
				{
					found=0;
					break;
				}
				index++;
			}
		}
		if(found=1)
		{
			break;
		}
	}
	if(found==1)
		printf("Word '%s' is first occurred at location: %d\n",find,index);
	else
		printf("'%s' is not occurred in a string\n",find);
}

int main()
{
	char s[100],f[100];
	printf("Entera string: ");
	scanf("%[^\n]s",s);
	printf("Enter a word to be searched in a string: ");
	scanf("%s",f);
	find_first_word(s,f);
	return 0;
}

7. Write a C program to concatenate two strings and find length of a new string.

#include<stdio.h>

void Mystrcat(char *s1,char *s2, char *s3)
{
    int len=0;
    while((*s1)!='\0')
    {
      *s3=*s1;
    }
    while((*s1)!='\0')
    {
      *s3=*s2;
    }
    while((*s3)!='\0')
    {
      len++;
    }
    printf("length of concatenated string: %d\n",len);
}

int main()
{
    char s1[1000],s2[1000],s3[1000];
    printf("Enter a string:");
    scanf("%[^\n]s",str1);
    Mystrcat(s1,s2,s3);
    printf("concatenated string is %s\n",s3);
    return 0;
}
