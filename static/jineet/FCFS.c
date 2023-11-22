#include<stdio.h>

void sortByArrivalTime(int n, int arrival_time[], int burst_time[]){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arrival_time[i] > arrival_time[j]){
				temp = arrival_time[i];
				arrival_time[i] = arrival_time[j];
				arrival_time[j] = temp;
				temp = burst_time[i];
				burst_time[i] = burst_time[j];
				burst_time[j] = temp;
			}
		}
	}
}

int main(){
	int arrival_time[100]={0}, burst_time[100]={0}, completion_time[100]={0}, waiting_time[100]={0}, turnaround_time[100]={0};
	int n,i;
	printf("Enter the number of process : ");
	scanf("%d",&n);

	//Arrival time input
	printf("Enter %d Arrival Times : ",n);
	for(i=0;i<n;i++){
		scanf("%d",&arrival_time[i]);
	}

	// Burst time input
	printf("Enter %d Burst Time : ",n);
	for(i=0;i<n;i++){
		scanf("%d",&burst_time[i]);
	}

	// Sorted all process by arrival time
	sortByArrivalTime(n,arrival_time,burst_time);

	// calculate completion time
	int sum = 0 ;
	for(i=0;i<n;i++){
		sum = sum + burst_time[i]; 
		completion_time[i] = completion_time[i] + sum;
	}

	// calculate turnaround time
	for(i=0;i<n;i++){
		turnaround_time[i] = completion_time[i] - arrival_time[i];
	}

	// calculate waiting time
	for(i=0;i<n;i++){
		waiting_time[i] = turnaround_time[i] - burst_time[i];
	}


	// calculate total turnaround time and total waiting time
	float totalTurnaroundTime = 0.0, totalWaitingTime = 0.0;
	for(i=0;i<n;i++){
		totalTurnaroundTime += turnaround_time[i];
		totalWaitingTime += waiting_time[i];
	}

	// print answer in table form
	printf("AT\t BT\t CT\t TAT\t WT\t\n");
	for(i=0;i<n;i++){
		printf("%d\t %d\t %d\t %d\t %d\t\n",arrival_time[i],burst_time[i],completion_time[i],turnaround_time[i],waiting_time[i]);
	}

	// print total turnaround time
	printf("Total Turnaround Time : %.2f\n", totalTurnaroundTime);
	//print total waiting time
	printf("Total Waiting Time : %.2f\n", totalWaitingTime);

	//print average turnaround time
	printf("Average Turnaround Time : %.5f\n", totalTurnaroundTime/n);
	// print average waiting time
	printf("Average Waiting Time : %.5f\n", totalWaitingTime/n);

	return 0;
}