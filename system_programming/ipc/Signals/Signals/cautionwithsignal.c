#include<stdio.h>
#include<signal.h>
#include<pthread.h>
#include<errno.h>
#include<unistd.h>

pthread_mutex_t gmutex =PTHREAD_MUTEX_INITIALIZER;

void s_handler(int signum)
{
        pthread_mutex_lock(&gmutex);
        printf("Enter signal handler function for : %d\n", signum);
        
        printf("Exit signal handler function for : %d\n", signum);
        pthread_mutex_unlock(&gmutex);
}



int main() {
	int sigret = 0;
	pthread_t thread1;
	signal(SIGINT,s_handler);
    	if (errno != 0) {
			printf("SIGINT set error %d \n", errno);
	}
	while(1) {
		printf("Locking the Mutex\n");
		pthread_mutex_lock(&gmutex);
		//sleep has been used to demonstrate the deadlock with ease
		sleep(100);
	
		pthread_mutex_unlock(&gmutex);
	}
	printf("can't print this \n");
}
