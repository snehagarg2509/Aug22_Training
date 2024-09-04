// Convwrting time in minutes to time in hours and minutes

#include<stdio.h>
#include<stdlib.h>
#define H 60

int main()
{
	int time; // input time in minutes
	int hr; // to store hours
	int min; // to store remaining minutes
	int val;

	printf("Enter time in minutes: ");
	scanf("%d",&time);

	if(time>=H)
		val = 1;
	else
		val = 0;
	
	switch(val)
	{
		case 1:
		{
			hr = time/60;
			min = time%60;
			printf("%d means %dhr %dmin\n",time,hr,min);
			break;
		}
		case 0:
			printf("%d means 0hr and %dmin\n",time,time);
			break;
	}

	return EXIT_SUCCESS;
}
