// Finding sum of digits of a number using loop

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num; //input number from user
	int sum; //to store sum of digits of the number

	printf("Enter a number(upto 10 digits): ");
	scanf("%d",&num);

	for(sum=0;num!=0;num=num/10)
	{
		sum = sum + (num%10);
	}

	printf("The sum of the digits is %d\n",sum);

	return EXIT_SUCCESS;
}
