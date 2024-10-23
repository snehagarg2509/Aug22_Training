#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<strings.h>
#include<signal.h>
#include<unistd.h>
#include<errno.h>

void sigint_handler(int signo)
{
	printf("Interrupt signal received.Signal handler running...\n");
	sleep(5);
	printf("Exiting interrupt handler.\n");
}

int main()
{
	struct sigaction sa;

	sa.signalhandler = sigint_handler;
	sa.flag = 0;
	sigemptyset(&sa.mask);

	sigaddset(&sa.mask,SIGQUIT);

	if(sigaction(SIGINT,&sa,NULL)==-1)
	{
		perror("Sigaction");
		return 1;
	}
	

	while(1)
	{
		pause();
	}

	return 0;
}
