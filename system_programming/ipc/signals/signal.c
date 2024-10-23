#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

void segmflt_handler(int signo)
{
	printf("You are handling segmentation fault signal.\n");
	exit(1);
}

int main()
{
	signal(SIGSEGV,segmflt_handler);

	int *ptr = NULL;
	*ptr = 50;
	return 0;
}
