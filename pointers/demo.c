// Trying some outputs

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *iptr;
	int a=5;

	iptr = &a;

	printf("%u\n",iptr);
	printf("%d\n",*iptr);
	printf("%u\n",&a);

	return EXIT_SUCCESS;
}
