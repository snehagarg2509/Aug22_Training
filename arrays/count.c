// Counting occurences of an element in array

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[5] = {1,1,3,1,5};
	int count=0;
	int num;

	printf("Enter the element you want to find: ");
	scanf("%d",&num);

	for(int i=0;i<5;i++)
	{
		if(a[i]==num)
			count++;
	}

	printf("%d occured %d times.\n",num,count);

	return EXIT_SUCCESS;
}
