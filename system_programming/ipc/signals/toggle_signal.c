#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

void int_handler(int);

void quit_handler(int signo)
{
	printf("You are handling sigquit signal.\n");
	signal(SIGQUIT,int_handler);
}

void int_handler(int signo)
{
	printf("You are handling interrupt signal.\n");
	signal(SIGQUIT,quit_handler);
}

int main()
{
	signal(SIGQUIT,int_handler);
	signal(SIGINT,quit_handler);

	while(1)
	{
		sleep(5);
		printf("while demo\n");
	}

	return 0;
}
