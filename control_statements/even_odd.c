// Finding the number is odd or even

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a; // to check odd or even number

	printf("Please enter a number: ");
	scanf("%d",&a);

	if(a%2==0)
		printf("The number is even.\n");
	else
		printf("The number is odd.\n");

	return EXIT_SUCCESS;
}
