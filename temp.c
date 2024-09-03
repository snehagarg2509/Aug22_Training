// Finding temperature conversions between Celcius and Fahrenheit

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float temp; // taking temp as input
	float conv; // giving converted temp as output

	printf("Please enter the temperature(in Celcius): ");
	scanf("%f", &temp);
	conv = temp*(9.0/5.0)+32;

	printf("The converted temperature is %f\n", conv);

	return EXIT_SUCCESS;
}

