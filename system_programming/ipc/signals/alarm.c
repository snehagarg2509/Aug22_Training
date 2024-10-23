#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<strings.h>
#include<signal.h>
#include<unistd.h>
#include<errno.h>

void alarm_handler(int signo)
{
	printf("Alarm signal received: %d\n",signo);
	exit(1);
}

int main()
{
	signal(SIGALRM,alarm_handler);

	alarm(10);
	printf("Alarm set for 10 seconds.\n");

	while(1)
	{
		printf("Waiting for alarm...\n");
		sleep(2);
	}

	return 0;
}
