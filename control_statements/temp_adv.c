// Giving advice according to temperature entered

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int temp; //taking input for advice

	printf("Please enter temperature(in C): ");
	scanf("%d",&temp);

	if(temp >= 30)
		printf("It's hot outside, stay hydrated!\n");
	else if(temp <= 30 && temp >= 20)
		printf("The weather is nice and warm.\n");
	else if(temp <= 19 && temp >= 10)
		printf("It's a bit chilly, wear a jacket.\n");
	else
		printf("It's cold outside, stay warm!\n");

	return EXIT_SUCCESS;
}
