#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 5  // Define the number of threads to create

// Function to be executed by each thread
void *thread_function(void *arg) {
    int thread_id = *((int *)arg);  // Retrieve thread ID from argument
    printf("Hello from Thread %d!\n", thread_id);
    pthread_exit(NULL);  // Exit the thread
}

int main() {
    pthread_t threads[NUM_THREADS];  // Array to hold thread identifiers
    int thread_number[NUM_THREADS];      // Array to hold thread number

    // Create multiple threads
    for (int i = 0; i < NUM_THREADS; i++) {
        thread_number[i] = i + 1;  // Set the thread number
        if (pthread_create(&threads[i], NULL, thread_function, (void *)&thread_number[i]) != 0) {
            printf("Error creating thread %d\n", i);
            return 1;
        }
    }

    // Wait for all threads to finish
    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);  // Join the thread
    }

    printf("All threads have finished execution.\n");
    return 0;
}

