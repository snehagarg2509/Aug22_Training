// Simple calculator using switch

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b;
	char op;

	printf("Enter two numbers and operation you want: ");
	scanf("%d %d %c",&a,&b,&op);

	switch(op)
	{
		case '+':
			printf("The addition of %d and %d is %d\n",a,b,a+b);
			break;
		case '-':
			printf("The subtraction of %d and %d is %d\n",a,b,a-b);
			break;
		case '*':
			printf("The multiplication of %d and %d is %d\n",a,b,a*b);
			break;
		case '/':
			printf("The division of %d and %d is %d\n",a,b,a/b);
			break;
	}

	return EXIT_SUCCESS;
}
