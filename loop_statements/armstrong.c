// Finding a number is Armstrong number or not

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int num; //taking input from user 

	printf("Enter a number: ");
	scanf("%d",&num);

	int count = 0;
	int temp = num;
	while(temp!=0)
	{
		temp = temp/10;;
		count++;
	}
	temp = num;
	int sum = 0;
	while(temp!=0)
	{
		int x = temp%10;
		sum = sum + pow(x,count);
		temp = temp/10;
	}

	if(num==sum)
		printf("%d is an Armstrong number.\n",num);
	else
		printf("%d is not an Armstrong number.\n",num);

	return EXIT_SUCCESS;
}
