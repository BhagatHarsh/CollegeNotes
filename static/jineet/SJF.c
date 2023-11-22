//SJF
#include <stdio.h>
#include <stdbool.h>

int main(){
    int n, i, j, k, temp, min_ind, arrival_time[10], burst_time[10], waiting_t[10], turnaround_t[10];
    float wAvg, tAvg, wSum=0, tSum;
    int min=99999;
    //Taking inputs
    printf("\nEnter the number of processes: ");
    scanf("%d", &n);
    printf("Enter the arrival time of processes :\n");
    for (i=0;i<n;i++) {
        scanf("%d",&arrival_time[i]);
    }
    printf("Enter the burst time of processes :\n");
    for (i =0;i<n;i++) {
        scanf("%d",&burst_time[i]);
    }
    //Sorting by arrival time 
    for(i =0; i<n;i++) {
        for(j=i+1; j<n;j++) {
            if(arrival_time[i]>arrival_time[j]) {
                temp = arrival_time[i];
                arrival_time[i] = arrival_time[j];
                arrival_time[j] = temp;
                temp = burst_time[i];
                burst_time[i] = burst_time[j];
                burst_time[j] = temp;
            }
            }
    }
    //Algorithm processing
    k=arrival_time[0];
    for(i=0;i<n;i++){
    	min=burst_time[i];
    	min_ind=i;
    	if(k<arrival_time[i]){
        	k=arrival_time[i];
        }
    	for(j=i; (k>=arrival_time[j])&(j<n); j++){
    		if(burst_time[j]<min){
    			min=burst_time[j];
    			min_ind=j;
    		}
    	}
        temp = arrival_time[i];
        arrival_time[i] = arrival_time[min_ind];
        arrival_time[min_ind] = temp;
        temp = burst_time[i];
        burst_time[i] = burst_time[min_ind];
        burst_time[min_ind] = temp;

        waiting_t[i]=k-arrival_time[i];
        turnaround_t[i]=waiting_t[i]+burst_time[i];
        k+=burst_time[i];
        
        wSum+=waiting_t[i];
        tSum += turnaround_t[i];
    }
    //Calculating avg waiting itme and turnaround time
    wAvg = wSum/n;
    tAvg = tSum/n;
    //Display
    printf("AT\tBT\tWT\tTT\n");

    for (i =0;i<n;i++) {
        printf("%d\t%d\t%d\t%d\n", arrival_time[i], burst_time[i], waiting_t[i], turnaround_t[i]);
    }

    printf("\nAVERAGE WAITING TIME: %.4f", wAvg);
    printf("\nAVERAGE TURNAROUND TIME: %.4f", tAvg);
    return 0;
}