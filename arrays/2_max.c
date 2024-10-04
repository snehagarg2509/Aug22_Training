// Finding second largest element in an array

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[5] = {5,4,3,2,1};
	int temp = 0;

	printf("Original array is:\n");
	for(int i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nSecond largest element is: %d\n",a[3]);

	return EXIT_SUCCESS;
}