#include<stdio.h>
#include<stdlib.h>
#define MAX 3

int main()
{
	int a[MAX];
	int b[MAX];
	int i,j;
	int temp;
	int k=0;

	printf("Enter elements in array 1: ");
	for(i=0;i<MAX;i++)
		scanf("%d",&a[i]);


	printf("Enter elements in array 2: ");
	for(i=0;i<MAX;i++)
		scanf("%d",&b[i]);
	

	int *c = (int *)malloc(6*sizeof(int));
	for(i=0;i<MAX;i++)
	{
		c[k]=a[i];
		k++;
	}
	
	for(i=0;i<MAX;i++)
	{
		c[k]=b[i];
		k=k+1;
	}

	printf("Merged array is \n");

	for(i=0;i<k;i++)
		printf("%d ",c[i]);
	printf("\n");

	return EXIT_SUCCESS;
}
