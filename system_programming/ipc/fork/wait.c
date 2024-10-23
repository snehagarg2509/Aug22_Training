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
		printf("child process\n");
		_exit(0);
	}
	else
	{
		//parent process waits for child to terminate
		wait(NULL);  //collects child's exit status
		printf("parent process cleaned up child.\n");
	}

	return 0;
}
