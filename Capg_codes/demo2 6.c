#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

// Function to be executed by the thread
void *print_message(void *ptr) {
	    	
		char *message = (char *)ptr;
    		printf("%s\n", message);
    		
		char *return_message = malloc(20 * sizeof(char));  // Allocate memory for the return message
    		strncpy(return_message, "Exiting from thread", 19);  // Copy the message to the allocated memory
    		return_message[19] = '\0';  // Ensure null termination
	
		return (void *)return_message;  // Return the message
}

int main() {
    pthread_t thread1, thread2;
    char *message1 = "Thread 1";
    char *message2 = "Thread 2";
    void *ret_val1, *ret_val2;

    // Create threads and pass their respective messages
    pthread_create(&thread1, NULL, print_message, (void *)message1);
    pthread_create(&thread2, NULL, print_message, (void *)message2);

    // Wait for threads to finish and retrieve their return values
    pthread_join(thread1, &ret_val1);
    printf("Thread 1 returned: %s\n", (char *)ret_val1);
    free(ret_val1);  // Free the allocated memory

    pthread_join(thread2, &ret_val2);
    printf("Thread 2 returned: %s\n", (char *)ret_val2);
    free(ret_val2);  // Free the allocated memory

    return 0;
}


