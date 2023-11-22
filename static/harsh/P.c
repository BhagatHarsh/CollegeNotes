// AU2140084 Harsh Bhagat

// includes
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_PHILOSOPHERS 5
pthread_mutex_t forks[NUM_PHILOSOPHERS];
int meals_required[NUM_PHILOSOPHERS] = {3, 2, 4, 1, 5};
int meals_eaten[NUM_PHILOSOPHERS] = {0};

void think()
{
    sleep(1);
}

void eat(int philosopher_id)
{
    printf("Philosopher %d is eating\n", philosopher_id);
    sleep(1);
    meals_eaten[philosopher_id]++;
}

void *philosopher(void *arg)
{
    int philosopher_id = *(int *)arg;
    while (meals_required[philosopher_id] > 0)
    {
        think();
        int lower_fork = philosopher_id;
        int higher_fork = (philosopher_id + 1) % NUM_PHILOSOPHERS;
        pthread_mutex_lock(&forks[lower_fork]);
        pthread_mutex_lock(&forks[higher_fork]);
        eat(philosopher_id);
        pthread_mutex_unlock(&forks[lower_fork]);
        pthread_mutex_unlock(&forks[higher_fork]);
        meals_required[philosopher_id]--;
        if (meals_required[philosopher_id] == 0)
        {
            printf("Philosopher %d has finished meals. Total meals eaten: %d\n",
                philosopher_id, meals_eaten[philosopher_id]);
            break;
        }
    }

    return 0;
}

int main()
{
    srand(time(NULL));
    pthread_t philosophers[NUM_PHILOSOPHERS];
    int philosopher_ids[NUM_PHILOSOPHERS];
    for (int i = 0; i < NUM_PHILOSOPHERS; ++i)
    {
        pthread_mutex_init(&forks[i], NULL);
    }

    for (int i = 0; i < NUM_PHILOSOPHERS; ++i)
    {
        philosopher_ids[i] = i;
        pthread_create(&philosophers[i], NULL, philosopher, &philosopher_ids[i]);
    }
    for (int i = 0; i < NUM_PHILOSOPHERS; ++i)
    {
        pthread_join(philosophers[i], NULL);
    }
    for (int i = 0; i < NUM_PHILOSOPHERS; ++i)
    {
        pthread_mutex_destroy(&forks[i]);
    }
    return 0;
}