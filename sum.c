#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=4;
	int b=6;
	int ret_val;

	ret_val = printf("The sum of %d and %d is %d\n", a,b,a+b);
	printf("Number of characters are %d\n", ret_val);

	return 0;
}
