// Giving grades according to scores using if statements

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int score;

	printf("Please enter the score: ");
	scanf("%d",&score);

	if(score <= 100 && score >= 90)
		printf("Your grade is A.\n");
	else if(score <= 89 && score >= 80)
		printf("Your grade is B.\n");
	else if(score <= 79 && score >= 70)
		printf("Your grade is C.\n");
	else if(score <= 69 && score >= 60)
		printf("Your grade is D.\n");
	else
		printf("Your grade is F.\n");

	return EXIT_SUCCESS;
}
