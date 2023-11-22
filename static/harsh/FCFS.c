//AU2140084 Harsh Bhagat

//includes
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


//main
int main() {

// taking number of processes as input from the user.
int n;
printf("Enter the number of processes: ");
scanf("%d",&n);

if(n <= 1){
    printf("\nPlease enter valid value\n");
}

//declaring all the necessary arrays and variables
int arrival_time[n], burst_time[n], waiting_time[n], turnaround_time[n];
int total_wt=0, total_tt=0;

//taking input the arrival and burst times
for(int i=0;i<n;++i){
    printf("\nArrival time of process %d: ",i+1);
    scanf("%d",&arrival_time[i]);
    printf("\nBurst time of process %d: ",i+1);
    scanf("%d",&burst_time[i]);
}

//sorting the process according to arrival time, just for good measure if the input is jumbled.
for(int i=0;i<n;++i){
    int min = i;
    for(int j=i+1;j<n;++j){
        if(arrival_time[j] < arrival_time[min]){
            min = j;
        }
    }
    int temp = arrival_time[i];
    arrival_time[i] = arrival_time[min];
    arrival_time[min] = temp;

    temp = burst_time[i];
    burst_time[i] = burst_time[min];
    burst_time[min] = temp;
}

//Processes will only start after the first one arrives, so Ideal till then.
int time_passed = arrival_time[0];

//calculating the waiting and turnaround time of each algorithm.
for(int i=0;i<n;++i){
    time_passed += burst_time[i];
    turnaround_time[i] = time_passed - arrival_time[i];
    waiting_time[i] = turnaround_time[i] - burst_time[i];
    total_wt += waiting_time[i];
    total_tt += turnaround_time[i];
}


//printing
printf("The Output:\n");
printf("\n\tProcess \tarrival \tburst \twaiting \tturnaround");
for(int i=0; i<n; ++i){
    printf("\n\t%d \t\t%d \t\t%d \t\t%d \t\t\t%d",i+1,arrival_time[i], burst_time[i], waiting_time[i], turnaround_time[i]); 
}

printf("\nThe average waiting time is %f", total_wt*1.0/n);
printf("\nThe average turnaround time is %f\n", total_tt*1.0/n);


return 0;
}