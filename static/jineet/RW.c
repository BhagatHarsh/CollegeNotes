#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define MAX_ITEMS 100
#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE];
int in = 0, out = 0;

sem_t mutex, empty, full;

void initialize_semaphores() {
    sem_init(&mutex, 0, 1);
    sem_init(&empty, 0, BUFFER_SIZE);
    sem_init(&full, 0, 0);
}

void produce_item(int *item) {
    *item = rand() % 100; // Producing a random number (0-99)
}

void process_item(int item) {
    printf("Processed item: %d\n", item);
}

void* producer(void* arg) {
    int item;
    int produced = 0;

    while (produced < MAX_ITEMS) {
        
        item = produced + 1;
        produce_item(&item);

        sem_wait(&empty);
        sem_wait(&mutex);

        buffer[in] = item;
        in = (in + 1) % BUFFER_SIZE;

        sem_post(&mutex);
        sem_post(&full);

        printf("Producer produced item: %d\n", item);
        produced++;
    }

    return NULL;
}

void* consumer(void* arg) {
    int item;
    int consumed = 0;

    while (consumed < MAX_ITEMS) {
        sem_wait(&full);
        sem_wait(&mutex);

        item = buffer[out];
        out = (out + 1) % BUFFER_SIZE;

        sem_post(&mutex);
        sem_post(&empty);

        process_item(item);
        printf("Consumer consumed item: %d\n", item);
        consumed++;
    }

    return NULL;
}

int main() {
    pthread_t prod_thread, cons_thread;

    initialize_semaphores();

    if (pthread_create(&prod_thread, NULL, producer, NULL) != 0) {
        fprintf(stderr, "Error creating producer thread\n");
        return 1;
    }

    if (pthread_create(&cons_thread, NULL, consumer, NULL) != 0) {
        fprintf(stderr, "Error creating consumer thread\n");
        return 1;
    }

    pthread_join(prod_thread, NULL);
    pthread_join(cons_thread, NULL);

    sem_destroy(&mutex);
    sem_destroy(&empty);
    sem_destroy(&full);

    return 0;
}