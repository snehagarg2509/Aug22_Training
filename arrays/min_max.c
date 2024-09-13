// Finding minimum and maximum element in an array

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[6] = {50,34,2,40,35,0};
	int min = arr[0];
	int max = arr[0];

	for(int i=0;i<6;i++)
	{
		if(arr[i]<min)
			min = arr[i];
		else if(arr[i]>max)
			max = arr[i];
	}

	printf("Min is %d and max is %d\n",min,max);

	return EXIT_SUCCESS;
}
