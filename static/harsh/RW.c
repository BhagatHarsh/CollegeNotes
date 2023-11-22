// AU2140084 Harsh Bhagat

// includes
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <time.h>
#include <unistd.h>

#define NUM_READERS 5
#define NUM_WRITERS 2
#define MAX_RUNNING_TIME 30

int sharedData = 0;
int readersCount = 0;

sem_t mutex;
sem_t rwMutex;

void *reader(void *arg)
{
    int readerId = *((int *)arg);
    time_t startTime = time(NULL);

    while (difftime(time(NULL), startTime) <= MAX_RUNNING_TIME)
    {

        sem_wait(&mutex);
        readersCount++;

        if (readersCount == 1)
        {
            sem_wait(&rwMutex);
        }

        sem_post(&mutex);

        printf("Reader %d read data: %d\n", readerId, sharedData);

        sem_wait(&mutex);
        readersCount--;

        if (readersCount == 0)
        {
            sem_post(&rwMutex);
        }

        sem_post(&mutex);
        
        // Sleep for a random time (0-2 seconds)
        unsigned int sleepTime = rand() % 3;
        sleep(sleepTime);
    }

    pthread_exit(NULL);
}

void *writer(void *arg)
{
    int writerId = *((int *)arg);
    time_t startTime = time(NULL);
    
    while (difftime(time(NULL), startTime) <= MAX_RUNNING_TIME)
    {

        sem_wait(&rwMutex);
        sharedData++;

        printf("Writer %d wrote data: %d\n", writerId, sharedData);
        sem_post(&rwMutex);

        // Sleep for a random time (0-2 seconds)
        unsigned int sleepTime = rand() % 3;
        sleep(sleepTime);
    }
    pthread_exit(NULL);
}

int main()
{
    pthread_t readerThreads[NUM_READERS];
    pthread_t writerThreads[NUM_WRITERS];
    int readerIds[NUM_READERS];
    int writerIds[NUM_WRITERS];

    // Initialize semaphores
    sem_init(&mutex, 0, 1); // Mutex for readersCount
    sem_init(&rwMutex, 0, 1); // Mutex for sharedData

    // Create reader threads
    for (int i = 0; i < NUM_READERS; i++)
    {
        readerIds[i] = i + 1;
        pthread_create(&readerThreads[i], NULL, reader, &readerIds[i]);
    }

    // Create writer threads
    for (int i = 0; i < NUM_WRITERS; i++)
    {
        writerIds[i] = i + 1;
        pthread_create(&writerThreads[i], NULL, writer, &writerIds[i]);
    }

    // Wait for reader threads to finish
    for (int i = 0; i < NUM_READERS; i++)
    {
        pthread_join(readerThreads[i], NULL);
    }

    // Wait for writer threads to finish
    for (int i = 0; i < NUM_WRITERS; i++)
    {
        pthread_join(writerThreads[i], NULL);
    }

    // Destroy semaphores
    sem_destroy(&mutex);
    sem_destroy(&rwMutex);

    return 0;
}