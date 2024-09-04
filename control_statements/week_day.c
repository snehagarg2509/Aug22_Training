// Converting days into weeks and days

#include<stdio.h>
#include<stdlib.h>
#define W 7

int main()
{
	int time; // input time in no. of days
	int week; // to store weeks
	int days; // to store remaining days
	int val;

	printf("Enter time in days: ");
	scanf("%d",&time);

	if(time>=W)
		val = 1;
	else
		val = 0;
	
	switch(val)
	{
		case 1:
		{
			week = time/W;
			days = time%W;
			printf("%d means %dweeks %ddays\n",time,week,days);
			break;
		}
		case 0:
			printf("%d means 0week and %ddays\n",time,time);
			break;
	}

	return EXIT_SUCCESS;
}
