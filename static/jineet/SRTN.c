#include <stdio.h>
int main(){
    int arrival_t[100];
    int burst_t[100];
    int copy[100];
    int i,j;
    int s;
    int count=0;
    int time;
    int n;
    double avg=0;
    double tt=0;
    int end;
    int waiting_t[100];
    int turnaround_t[100];
    //Taking inputs
    printf("enter the number of Processes:\n");
    scanf("%d",&n); 
    printf("enter arrival time\n");
    for(i=0;i<n;i++){
        scanf("%d",&arrival_t[i]);
    }
    printf("enter burst time\n");
    for(i=0;i<n;i++){
        scanf("%d",&burst_t[i]); 
    }
    //making copy of burst time
    for(i=0;i<n;i++){
        copy[i]=burst_t[i];
    }
    //Processing the algorithm
    burst_t[99]=99999;
    for(time=0;count!=n;time++){
        s=99;
        for(i=0;i<n;i++){
            if(arrival_t[i]<=time && burst_t[i]<burst_t[s] && burst_t[i]>0 ){
                s=i;
            }
        }
        burst_t[s]--;
        if(burst_t[s]==0){
            count++;
            end=time+1;
            waiting_t[s]=end-arrival_t[s]-copy[s];
            turnaround_t[s] = end-arrival_t[s];
            avg=avg+end-arrival_t[s]-copy[s];
            tt=tt+end-arrival_t[s];
        } 
    }
    //Display
    printf("AT \t BT \t WT \t TT\n");
    for(int i =0;i<n;i++){
        printf("%d \t %d \t %d \t %d\n", arrival_t[i],copy[i],waiting_t[i], turnaround_t[i]);
    }
    printf("\nAverage waiting time = %f\n",avg/n);
    printf("\nAverage Turnaround time = %f",tt/n);
    return 0;
}
