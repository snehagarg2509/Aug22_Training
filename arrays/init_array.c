// Initialisation of array and printing elements

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(int);

	printf("Elements of array are: \n");
	for(int i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}

	return EXIT_SUCCESS;
}
