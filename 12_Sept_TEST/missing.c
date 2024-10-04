#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int main()
{
	int n;
	int a[MAX];
	int i;

	printf("Enter the number of elements in array: \n");
	scanf("%d",&n);
	
	printf("Enter elements from 1 to %d\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Array is: \n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	int *count = (int *)malloc((n+1)*sizeof(int));
	
	for(i=0;i<n;i++)
		count[a[i]]+=1;


	printf("\nMissing number is :\n");
	for(i=1;i<n;i++)
	{
		if(count[i]==0)
			printf("%d\n",i);

	}

	return EXIT_SUCCESS;
}
