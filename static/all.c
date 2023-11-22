//FCFS
#include<stdio.h>
#include<stdbool.h>

int main(){
    int n, i, j, k, temp, wSum=0, tSum=0, p[10]={1,2,3,4,5,6,7,8,9,10}, at[10], bt[10], wt[10], tt[10];
    float wAvg, tAvg;
    bool swapped;

    printf("********** First Come First Serve Scheduling **********\n");
    printf("Enter the number of processes: ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("\tEnter the arrival time of process %d: ",i+1);
        scanf("%d",&at[i]);
        printf("\tEnter the burst time of process %d: ",i+1);
        scanf("%d",&bt[i]);	
    }

    for(i=0; i<n-1; i++){
        swapped = false;
        for(j=0; j<n-i-1; j++){
            if(at[j]>at[j+1]){
                swapped = true;

                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;

                temp=at[j];
                at[j]=at[j+1];
                at[j+1]=temp;

                temp=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=temp;
            }
        }
        if(!swapped){
            break;
        }
    }

    k=at[0];
    for(i=0; i<n; i++){
        if(k<at[i]){
            k=at[i];
        }
        wt[i]=k-at[i];
        tt[i]=wt[i]+bt[i];
        k+=bt[i];

        wSum+=wt[i];
        tSum+=tt[i];
    }

    wAvg=wSum/n;
    tAvg=tSum/n;

    printf("\n\n************************************************************\n");
    printf("Process\tAT\tBT\tWT\tTT\n");
    for(i=0;i<n;i++){
        printf("p%d\t%d\t%d\t%d\t%d\n",p[i],at[i],bt[i],wt[i],tt[i]);
    }
    printf("Average Waiting Time: %.4f\n",wAvg);
    printf("Average Waiting Time: %.4f\n",tAvg);

}





//SJF
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j, k, temp, min, min_ind, p[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, at[10], bt[10], wt[10], tt[10];
    float wAvg, tAvg, wSum=0, tSum;
    bool swapped;

    printf("********** Shortest Job First Scheduling (NP) **********\n");
    printf("\nEnter the number of processes:  ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\tEnter the arrival time of process %d: ", i + 1);
        scanf("%d", &at[i]);
        printf("\tEnter the burst time of process %d: ", i + 1);
        scanf("%d", &bt[i]);
    }

    for (i = 0; i < n-1; i++) {
        swapped=false;
        for (j = 0; j < n-i-1; j++) {
            if (at[j] > at[j+1]) {
                swapped=true;

                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;

                temp = at[j];
                at[j] = at[j+1];
                at[j+1] = temp;

                temp = bt[j];
                bt[j] = bt[j+1];
                bt[j+1] = temp;
            }
        }
        if (swapped==false){
        break;
        }
    }

    k=at[0];
    for(i=0;i<n;i++){
        min=bt[i];
        min_ind=i;
        if(k<at[i]){
            k=at[i];
        }
        for(j=i; (k>=at[j])&(j<n); j++){
            if(bt[j]<min){
                min=bt[j];
                min_ind=j;
            }
        }

        temp = p[i];
        p[i] = p[min_ind];
        p[min_ind] = temp;

        temp = at[i];
        at[i] = at[min_ind];
        at[min_ind] = temp;

        temp = bt[i];
        bt[i] = bt[min_ind];
        bt[min_ind] = temp;

        wt[i]=k-at[i];
        tt[i]=wt[i]+bt[i];
        k+=bt[i];

        wSum+=wt[i];
        tSum += tt[i];
    }

    wAvg = wSum/n;
    tAvg = tSum/n;

    printf("*****************************************\n");
    printf("Process\tAT\tBT\tWT\tTT\n");

    for (i = 0; i < n; i++) {
        printf("p%d\t%d\t%d\t%d\t%d\n", p[i], at[i], bt[i], wt[i], tt[i]);
    }

    printf("\nAVERAGE WAITING TIME: %.4f\n", wAvg);
    printf("AVERAGE TURNAROUND TIME: %.4f\n", tAvg);
    return 0;
 }

//SRTN
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j, k=0, temp, min, min_ind, completed=0, p[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, at[10], bt[10],rt[10],ct[10], wt[10], tt[10];
    float wAvg, tAvg, wSum=0, tSum=0;
    bool swapped;

    printf("********** Shortest Job First Scheduling (NP) **********\n");
    printf("\nEnter the number of processes:  ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\tEnter the arrival time of process %d: ", i + 1);
        scanf("%d", &at[i]);
        printf("\tEnter the burst time of process %d: ", i + 1);
        scanf("%d", &bt[i]);
        rt[i]=bt[i];
    }

    for (i = 0; i < n-1; i++) {
        swapped=false;
        for (j = 0; j < n-i-1; j++) {
            if (at[j] > at[j+1]) {
                swapped=true;

                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;

                temp = at[j];
                at[j] = at[j+1];
                at[j+1] = temp;

                temp = bt[j];
                bt[j] = bt[j+1];
                bt[j+1] = temp;
            }
        }
        if (swapped==false){
        break;
        }
    }

    while (completed < n) {
        int shortest = -1;
        for (int i = 0; i < n; i++) {
            if (at[i] <= k && rt[i] > 0) {
                if (shortest == -1 || rt[i] < rt[shortest]) {
                    shortest = i;
            }
            }
        }

        if (shortest == -1) {
            k++;
        } 
        else {
            rt[shortest]--;

            if (rt[shortest] == 0) {
                completed++;
                ct[shortest] = k + 1;
            }

            k++;

        }
    }

    for(i=0; i<n; i++){
        tt[i]=ct[i]-at[i];
        wt[i]=tt[i]-bt[i];
        wSum+=wt[i];
        tSum+=tt[i];
    }

    wAvg = wSum/n;
    tAvg = tSum/n;

    printf("*****************************************\n");
    printf("Process\tAT\tBT\tCT\tWT\tTT\n");

    for (i = 0; i < n; i++) {
        printf("p%d\t%d\t%d\t%d\t%d\t%d\n", p[i], at[i], bt[i], wt[i], tt[i]);
    }

    printf("\nAVERAGE WAITING TIME: %.4f\n", wAvg);
    printf("AVERAGE TURNAROUND TIME: %.4f\n", tAvg);
    return 0;
 }



//Round Robin
#include<stdio.h>
#include<stdbool.h>
#include<limits.h>

struct p{
    int pos, AT, BT, WT, FT, TT;
};
int main(){
    int n, i, j, q, time=0, index=-1, mini;
    float wSum=0, tSum=0, wAvg, tAvg;
    bool flag;

    printf("********** Round Robin Scheduling **********\n");
    printf("Enter the number of processes: ");
    scanf("%d",&n);
    printf("Enter the time quantum: ");
    scanf("%d",&q);

    struct p P[n];
    float at[n], bt[n];
    int c=n;

    for(i=0; i<n; i++){
        P[i].pos = i;
        printf("\tEnter the arrival time of process %d: ",i+1);
        scanf("%d",&P[i].AT);
        printf("\tEnter the burst time of process %d: ",i+1);
        scanf("%d",&P[i].BT);

        at[i]=P[i].AT;
        bt[i]=P[i].BT;	
    }

    while(c!=0){
        mini = INT_MAX;
            flag = false;

        for (i = 0; i < n; i++) {
            float k = time + 0.1;
            if (at[i] <= k && at[i]<mini && bt[i] > 0) {
                index = i;
                mini = at[i];
                flag = true;
            }
        }

        if (!flag) {
            time++;
            continue;
        }

    //Burst time is less or equal to than the time quantum
        if (bt[index] <= q)

            time += bt[index];

        else

            time += q;



        bt[index] = (bt[index] <= q) ? 0 : bt[index] - q;

        if (bt[index] == 0) {
            c--;
            P[index].FT = time;
            P[index].WT = P[index].FT - P[index].AT - P[index].BT;
            wSum += P[index].WT;
            P[index].TT = P[index].BT + P[index].WT;
            tSum += P[index].TT;
        }
    }

        wAvg = wSum/n;
        tAvg = tSum/n;

        printf("*****************************************\n");
        printf("Process\tAT\tBT\tFT\tWT\tTT\n");

        for (i = 0; i < n; i++) {
        printf("p%d\t%d\t%d\t%d\t%d\t%d\n", P[i].pos, P[i].AT, P[i].BT, P[i].FT, P[i].WT, P[i].TT);
        }

        printf("\nAVERAGE WAITING TIME: %.4f\n", wAvg);
        printf("AVERAGE TURNAROUND TIME: %.4f\n", tAvg);
        return 0;

}

//Philosophers
#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int NUM_PHILOSOPHERS;
int TIMEOUT_SECONDS;

sem_t chopstick[100]; // Assuming a maximum of 100 philosophers
int meals[100];       // Assuming a maximum of 100 philosophers

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

    pthread_t philosopherThreads[NUM_PHILOSOPHERS]; // Assuming a maximum of 100 philosophers

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

//ReaderWriter

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>
#include<time.h>

#define MAX_READ 20
#define MAX_WRITE 10

int rc = 0;
sem_t mutex;
sem_t db;

void* reader(void* arg)
{
    int reader_id = *(int *)arg;
    int reads = 0;

    while(reads < MAX_READ)
    {
        sem_wait(&mutex);
        rc = rc + 1;
        if(rc == 1) sem_wait(&db);
        sem_post(&mutex);
        printf("Reader %d is reading from the database.\n", reader_id);
        time_t now = time(NULL);
        printf("[TIME] Reader %d started reading at: %s\n", reader_id, ctime(&now));
        usleep(150000);

        sem_wait(&mutex);
        rc = rc - 1;
        if(rc == 0) sem_post(&db);
        sem_post(&mutex);
        usleep(800000);
        now = time(NULL);
        printf("[TIME] Reader %d finished reading at: %s\n", reader_id, ctime(&now));

        reads++;
    }
    return NULL;
}

void* writer(void* arg)
{
    int writer_id = *(int *)arg;
    int writes = 0;

    while(writes < MAX_WRITE)
    {
        sem_wait(&db);

        printf("Writer %d is writing into the database.\n",writer_id);
        time_t now = time(NULL);
        printf("[TIME] Writer %d started writing at: %s\n", writer_id, ctime(&now));
        usleep(150000);

        writes++;

        now = time(NULL);
        printf("[TIME] Writer %d finished writing at: %s\n", writer_id, ctime(&now));
        sem_post(&db);
        usleep(800000);
    }
    return NULL;
}

int main()
{
    pthread_t readers[5], writers[3];

    int reader_ids[5] = {1,2,3,4,5};
    int writer_ids[3] = {1,2,3};

    sem_init(&mutex, 0, 1);
    sem_init(&db, 0, 1);

    for(int i=0; i<5; i++)
    {
        pthread_create(&readers[i], NULL, reader, (void *)&reader_ids[i]);
    }

    for(int i=0; i<3; i++)
    {
        pthread_create(&writers[i], NULL, writer, (void *)&writer_ids[i]);
    }

    for(int i=0; i<5; i++)
    {
        pthread_join(readers[i], NULL);
    }

    for(int i=0; i<3; i++)
    {
        pthread_join(writers[i], NULL);
    }

    sem_destroy(&mutex);
    sem_destroy(&db);

    return 0;
}

//ProducerConsumer

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



