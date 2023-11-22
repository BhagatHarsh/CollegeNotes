#include<stdio.h>
#include<limits.h>
#include<stdbool.h>

int main() {
	int n, i, j;
    int q;
    int j=-1;
    //Taking the number of processes
	printf("Enter the number of processes: ");
	scanf("%d", &n);
	int arrival_t[n], burst_t[n], waiting_t[n], turnaround_t[n];
    int tot_wt = 0, tot_tat = 0;
    int count = n;
	float current_t = 0, mini = INT_MAX, b[n], a[n];
	bool flag = false;
    //Enter time quantam
	printf("Enter the current_t quantum: ");
	scanf("%d", &q);
    //Arrival time input
	printf("Enter the arrival current_t of processes:\n");
	for(i = 0; i < n; i++)
		scanf("%d", &arrival_t[i]);
    //Burst time input
	printf("Enter the burst current_t of processes:\n");
	for(i = 0; i < n; i++)
		scanf("%d", &burst_t[i]);
    //Making copy of arrival time burst time
	for(i =0; i< n;i++) {
		b[i]=burst_t[i];
		a[i] =arrival_t[i];
	}

	while(count!=0) {
		mini=INT_MAX;
		flag =false;
        //Finding process with minimum time from arrived ones
		for(i =0;i<n;i++) {
			float p =current_t + 0.1; // The process arriving again will get lesser priority than one appearing for first time
			if(a[i]<= p&& mini>a[i] &&b[i]> 0) {
				j =i;
				mini=a[i];
				flag= true;
			}
		}
        //if no process arrive
		if(!flag){
			current_t++;
			continue;
		}
        //reducing burst time as per quantam
		if(b[j]<=q){
			current_t+=b[j];
			b[j]= 0;
		} 
        else{
			current_t+= q;
			b[j]-=q;
		}
		if(b[j]>0){
			a[j] =current_t + 0.1;//Process coming again gets lesser priority
		}
        //Calculating process information once it completes
		if(b[j]== 0){
			count--;
			waiting_t[j]= current_t-arrival_t[j]-burst_t[j];
			tot_wt+=waiting_t[j];
			turnaround_t[j]=burst_t[j]+waiting_t[j];
			tot_tat+=turnaround_t[j];
		}
	}

    //Display
	printf("\nBurst\t Arrival\t Waiting\t Turnaround");
	for(i =0; i<n;i++) {
		printf("\n %d\t %d\t\t %d\t\t\t %d", burst_t[i], arrival_t[i], waiting_t[i], turnaround_t[i]);
	}
    //calculating Avg time 
	float wavg=(float)tot_wt/n;
	float tavg=(float)tot_tat/n;
	printf("\nAverage Waiting current_t: %f",wavg);
	printf("\nAverage Turn Around current_t: %f",tavg);

	return 0;
}