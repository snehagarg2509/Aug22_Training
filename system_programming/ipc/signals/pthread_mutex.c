#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<strings.h>
#include<signal.h>
#include<unistd.h>
#include<errno.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void s_handler(int signo)
{
	pthread_mutex_lock(&mutex);
	printf("Enter signal handler function for: %d\n",signo);

	printf("Exit signal handler function for: %d\n",signo);
	pthread_mutex_unlock(&mutex);
}

int main()
{
	
