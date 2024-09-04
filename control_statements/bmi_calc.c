// Finding body mass index and classifying them

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int weight; //taking weight as input from user
	float height; //taking height as input from user
	float bmi; //storing bmi value

	printf("Please enter body weight (in kgs): ");
	scanf("%d",&weight);
	printf("Please enter height (in metres): ");
	scanf("%f",&height);

	bmi = weight/(height*height);

	printf("Your BMI is %f\n",bmi);

	if(bmi <= 18.5)
		printf("You are Underweight.\n");
	else if(bmi <= 24.9 && bmi >= 18.5)
		printf("You are Normal Weight.\n");
	else if(bmi <= 29.9 && bmi >= 25)
		printf("You are Overweight.\n");
	else
		printf("You are Obese.\n");

	return EXIT_SUCCESS;
}

