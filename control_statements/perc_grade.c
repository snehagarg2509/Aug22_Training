// Finding grade from percentage

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float perc; // input as percentage

	printf("Please enter percentage: ");
	scanf("%f",&perc);

	switch((int)perc/10)
	{
		case 9:
			printf("Grade is A.\n");
			break;
		case 8:
			printf("Grade is B.\n");
			break;
		case 7:
			printf("Grade is C.\n");
			break;
		case 6:
			printf("Grade is D.\n");
			break;
		default:
			printf("Failed.\n");
			break;
	}
		

	return EXIT_SUCCESS;
}
