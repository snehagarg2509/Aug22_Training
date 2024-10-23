#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

// Function executed by threads
void *thread_function(void *arg) {
    printf("Thread %d is starting...\n", *(int *)arg);
    sleep(2);  // Simulate some work
    printf("Thread %d is finished.\n", *(int *)arg);
    return NULL;
}

int main() {
    pthread_t thread1, thread2;
    int thread_id1 = 1, thread_id2 = 2;

    // Create threads
    pthread_create(&thread1, NULL, thread_function, (void *)&thread_id1);
    pthread_create(&thread2, NULL, thread_function, (void *)&thread_id2);

    // Exit the main thread without waiting for child threads
    printf("Main thread is exiting without waiting for child threads.\n");
    return 0;
}

