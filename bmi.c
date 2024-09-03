// Finding body mass index by taking weight and height as inputs

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

	return EXIT_SUCCESS;
}

