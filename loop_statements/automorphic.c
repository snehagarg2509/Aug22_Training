// Number is automorphic or not

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int num; //input from user
	int sq; //storing square of number
	int val; //extracting last n digits

	printf("Enter a number: ");
	scanf("%d",&num);
	
	int count = 0;
	int temp = num;
	while(temp!=0)
	{
		temp = temp/10;
		count++;
	}

	sq = num*num;
	val = pow(10,count);
	int ans = sq%val;

	if(num==ans)
		printf("%d is automorphic number.\n",num);
	else
		printf("%d is not an automorphic number.\n",num);

	return EXIT_SUCCESS;
}
