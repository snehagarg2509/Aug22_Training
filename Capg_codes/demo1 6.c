#include <stdio.h>
#include <pthread.h>

// Function that will be executed by the thread
void *thread_function(void *arg) {

    printf("Hello from the thread!\n");
    return NULL;  // The thread doesn't return any specific value

}

int main() {
    pthread_t thread;  // Declare a thread variable

    // Create the thread and run `thread_function`

    if (pthread_create(&thread, NULL, thread_function, NULL) != 0) {
        printf("Error creating thread\n");
        return 1;
    }

    // Wait for the thread to finish
    if (pthread_join(thread, NULL) != 0) {
        printf("Error joining thread\n");
        return 2;
    }

    printf("Thread finished execution!\n");
    return 0;
}

