#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
	pid_t pid = fork();

	if(pid==0)
	{
		//child process
		printf("child process.\n");
		_exit(0);
	}
	else
	{
		//parent process dose not waits for child to terminate
		printf("parent process is going to sleep.\n");
		sleep(10);
	}

	return 0;
}

