#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* thread_function(void* arg) {
    printf("Detached thread running\n");
    sleep(3);  // Simulate some work
    printf("Detached thread finished\n");
    return NULL;
}

int main() {
    pthread_t thread;
    pthread_attr_t attr;

    // Initialize thread attribute
    pthread_attr_init(&attr); 


    // Set the thread to be detached
   pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
    // Create a detached thread
    pthread_create(&thread, &attr, thread_function, NULL);

    // Destroy the attribute object, as it is no longer needed
    pthread_attr_destroy(&attr);

    // Main thread continues
    printf("Main thread continuing\n");
    sleep(1);
    printf("Main thread finished\n");

    // No need to join the thread
    return 0;
}

