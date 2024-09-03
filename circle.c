// Finding area and circumference of circle

#include<stdio.h>
#include<stdlib.h>
#define pi 3.14

int main()
{
	int r; // radius of circle
	float area; // area of circle
	float circum; // circumference of circle

	printf("Please enter radius: ");
	scanf("%d", &r);
	area = pi*r*r;
	circum = 2*pi*r;
	printf("The area and circumference of circle is %f and %f\n",area,circum);

	return EXIT_SUCCESS;
}

