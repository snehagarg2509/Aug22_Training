#include <stdio.h>
#include <signal.h>
#include <unistd.h>
void signal_handler(int);
void alternate_handler(int signo)
{
printf("Alernate Handler\n");
signal(SIGQUIT, signal_handler);
}
void signal_handler(int signo)
{
	printf("Caught Signal %d\n", signo);
	signal(SIGQUIT, alternate_handler);
}


int main()
{
signal(SIGQUIT, signal_handler);
signal(SIGINT, alternate_handler);
while(1)
	{
		sleep(2);
		printf("signal demo: while loop \n");
	}
	return 0;
}

