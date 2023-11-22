#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>

void *tFun(void *arg);
int num[2] = {5,5};
int sum;
void *result;

int main(){
        pthread_t t;
        pthread_create(&t,NULL,tFun, (void *)num);
        pthread_join(t,&result);
        printf("Sum is : %d",*((int *)result));
}

void *tFun(void *arg){
        int *x = arg;
        int *sum = (int *)malloc(sizeof(int));
        *sum = x[0] + x[1];
        pthread_exit((void *)sum);
}