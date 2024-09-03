// Finding maximum of 3 numbers using nested ternary operators

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c; //comparing 3 numbers
	int max; //finding maximum of 3 numbers

	printf("Please enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);

	max = a>b?a>c?a:c:(b>c?b:c);

	printf("The maximum of three numbers is %d\n",max);

	return EXIT_SUCCESS;
}
