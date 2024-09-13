// Read and print array elements

#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
	int arr[MAX];

	printf("Enter 5 values for array: ");
	for(int i=0;i<MAX;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Array elements using index are: \n");
	for(int i=0;i<MAX;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("Array elements using address are: \n");
	for(int i=0;i<MAX;i++)
	{
		printf("%d\n",*(&arr[i]));
	}

	return EXIT_SUCCESS;
}
