// Finding square number closest to the number entered by the user

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int num; //taking input from user
	float sq; //for storing value of square root
	int val; //for storing round off value
	int ans; //for printing final answer

	printf("Enter a number: ");
	scanf("%d",&num);

	sq = sqrt(num);
	val = round(sq);
	ans = val*val;

	printf("Closest square is %d\n",ans);

	return EXIT_SUCCESS;
}
