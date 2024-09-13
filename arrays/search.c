// Finding a specific element and printing its index

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[5] = {1,2,3,4,5};
	int num,index = -1;

	printf("number you want to find: ");
	scanf("%d",&num);

	for(int i=0;i<5;i++)
	{
		if(a[i]==num){
			index = i;
			printf("The number is there at index %d\n",i);
		}
	}
	if(index == -1)
		printf("The number is not present in the array.\n");

	return EXIT_SUCCESS;
}
