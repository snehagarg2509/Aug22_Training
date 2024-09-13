// Checking whether an array is a palindrome or not

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[]={1,1,2,1,1};
	int b[]={0};
	int n = sizeof(a)/sizeof(int);
	int i=0,j=0,flag=0;

	printf("Array a is \n");
	for(i=0;i<n;i++)
		printf("%d",a[i]);

	for(i=n-1;i>=0;i--)
	{
		b[j] = a[i];
		j++;
	}
	printf("\nArray b is \n");
	for(i=0;i<n;i++)
		printf("%d",b[i]);
	
	for(i,j=0;i,j<n;i++,j++)
	{
		if(b[j]==a[i])
		{
			flag=1;
		}
	}
	if(flag==1)
		printf("\nIt's a palindrome.\n");
	else
		printf("\nNot a palindrome.\n");

	return EXIT_SUCCESS;
}
