// Finding sum and average of elements in array

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[] = {1,2,3,4,5};
	int sum=0;
	int	size = sizeof(arr)/sizeof(int);

	for(int i=0;i<size;i++)
	{
		sum = sum+arr[i];
	}

	printf("Sum of elements is %d\n",sum);

	int avg = sum/size;
	printf("Average of elements is %d\n",avg);

	return EXIT_SUCCESS;
}
