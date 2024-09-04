// Max of 3 numbers using control statements

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c; //to compare between numbers

	printf("Please enter 3 numbers: ");
	scanf("%d %d %d",&a,&b,&c);

	if(a>b && a>c)
		printf("%d is the largest number.\n",a);
	else if(b>a && b>c)
		printf("%d is the largest number.\n",b);
	else
		printf("%d is the largest number.\n",c);

	return EXIT_SUCCESS;
}
