// AU2140084 Harsh Bhagat

// includes
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define BUFFER_SIZE 5
#define NUM_ITEMS 10

int buffer[BUFFER_SIZE];
int in = 0;
int out = 0;

sem_t mutex;
sem_t empty;
sem_t full;

void *producer(void *arg)
{
    for (int i = 0; i < NUM_ITEMS; i++)
    {
        int item = rand() % 100 + 1; // Generate a random item
        sem_wait(&empty); // Wait for an empty slot in the buffer
        sem_wait(&mutex); // Acquire mutex to protect buffer
        // Add item to the buffer
        buffer[in] = item;
        printf("Producer produced item: %d\n", item);
        in = (in + 1) % BUFFER_SIZE;
        sem_post(&mutex); // Release the mutex
        sem_post(&full); // Signal that the buffer is no longer empty
    }
    pthread_exit(NULL);
}

void *consumer(void *arg)
{
    for (int i = 0; i < NUM_ITEMS; i++)
    {
        sem_wait(&full); // Wait for a full slot in the buffer
        sem_wait(&mutex); // Acquire mutex to protect buffer
        // Remove item from the buffer
        int item = buffer[out];
        printf("Consumer consumed item: %d\n", item);
        out = (out + 1) % BUFFER_SIZE;
        sem_post(&mutex); // Release the mutex
        sem_post(&empty); // Signal that the buffer is no longer full
    }
    pthread_exit(NULL);
}

int main()
{
    pthread_t producerThread;
    pthread_t consumerThread;
    // Initialize semaphores
    sem_init(&mutex, 0, 1); // Mutex for buffer access
    sem_init(&empty, 0, BUFFER_SIZE); // Count of empty slots in buffer
    sem_init(&full, 0, 0); // Count of full slots in buffer

    // Create producer thread
    pthread_create(&producerThread, NULL, producer, NULL);
    // Create consumer thread
    pthread_create(&consumerThread, NULL, consumer, NULL);
    // Wait for producer thread to finish
    pthread_join(producerThread, NULL);
    // Wait for consumer thread to finish
    pthread_join(consumerThread, NULL);
    // Destroy semaphores
    sem_destroy(&mutex);
    sem_destroy(&empty);
    sem_destroy(&full);

    return 0;
}