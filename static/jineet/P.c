#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


// Taking input
int NUM_PHILOSOPHERS;
int TIMEOUT_SECONDS;
sem_t chopstick[100];
int meals[100];

void* philosopher(void* arg) {
    int philosopherId = *(int*)arg;
    int leftChopstick = philosopherId;
    int rightChopstick = (philosopherId + 1) % NUM_PHILOSOPHERS;

    // Adjust chopstick allocation for the first philosopher
    if (philosopherId == 0) {
        leftChopstick = (philosopherId + 1) % NUM_PHILOSOPHERS;
        rightChopstick = philosopherId;
    }

    while (meals[philosopherId] > 0) {
        time_t startTime = time(NULL);

        // Acquire left chopstick
        sem_wait(&chopstick[leftChopstick]);
        printf("Philosopher %d picked up left chopstick %d\n", philosopherId, leftChopstick);

        // Try to acquire right chopstick with timeout
        while (time(NULL) - startTime < TIMEOUT_SECONDS) {
            if (sem_trywait(&chopstick[rightChopstick]) == 0) {
                printf("Philosopher %d picked up right chopstick %d\n", philosopherId, rightChopstick);
                break;
            }
        }

        // If right chopstick not acquired within timeout
        if (time(NULL) - startTime >= TIMEOUT_SECONDS) {
            printf("Philosopher %d couldn't acquire right chopstick %d within timeout. Releasing left chopstick %d\n", philosopherId, rightChopstick, leftChopstick);
            sem_post(&chopstick[leftChopstick]);
            continue;
        }

        // Eating
        printf("Philosopher %d is eating\n", philosopherId);
        meals[philosopherId]--;
        sleep(2);

        // Release chopsticks
        printf("Philosopher %d is releasing chopsticks %d and %d\n", philosopherId, leftChopstick, rightChopstick);
        sem_post(&chopstick[leftChopstick]);
        sem_post(&chopstick[rightChopstick]);

        // Thinking
        printf("Philosopher %d is thinking\n", philosopherId);
        sleep(2);
    }

    printf("Philosopher %d finished their meals\n", philosopherId);
    return NULL;
}

int main() {
    printf("Enter the number of philosophers: ");
    scanf("%d", &NUM_PHILOSOPHERS);

    printf("Enter the timeout seconds: ");
    scanf("%d", &TIMEOUT_SECONDS);

    pthread_t philosopherThreads[NUM_PHILOSOPHERS];

    // Initialize chopsticks and meals
    for (int i = 0; i < NUM_PHILOSOPHERS; i++) {
        sem_init(&chopstick[i], 0, 1);
        meals[i] = i + 1;
    }

    // Create philosopher threads
    for (int i = 0; i < NUM_PHILOSOPHERS; i++) {
        int* philosopherId = (int*)malloc(sizeof(int));
        *philosopherId = i;
        pthread_create(&philosopherThreads[i], NULL, philosopher, philosopherId);
    }

    // Wait for philosopher threads to finish
    for (int i = 0; i < NUM_PHILOSOPHERS; i++) {
        pthread_join(philosopherThreads[i], NULL);
    }

    return 0;
}