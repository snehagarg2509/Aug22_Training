// Taking input from user for pos,neg,zero

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a; //taking input from user

	printf("Enter an integer value: ");
	scanf("%d",&a);

	switch(a>0)
	{
		case 1:
			printf("Number is positive.\n");
			break;
		case 0:
			switch(a<0)
			{
				case 1:
					printf("Number is negative.\n");
					break;
				case 0:
					printf("Number is zero.\n");
					break;
			}
		break;
	}

	return EXIT_SUCCESS;
}
