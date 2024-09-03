// Finding maximum of two numbers using ternary operator

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b; // taking two numbers for comparison
	int max; // storing max value

	printf("Please enter two numbers: ");
	scanf("%d,%d",&a,&b);

	max = (a>b)?a:b;

	printf("The maximum of two numbers is %d\n",max);

	return EXIT_SUCCESS;
}



