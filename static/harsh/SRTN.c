// AU2140084 Harsh Bhagat

// includes
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// main
int main()
{

// taking number of processes as input from the user.
int n, time_passed = INT_MAX;
printf("\nEnter the Number of Processes: ");
scanf("%d", &n);

if (n <= 1)
{
    printf("\nPlease Enter valid input\n");
    return 0;
}

//declaring all the necessary arrays and variables
int arrival_time[n], burst_time[n], waiting_time[n], turnaround_time[n], copy_burst_time[n];
int time_quantum, total_wt = 0, total_tt = 0;

printf("\nEnter time quantum: ");
scanf("%d", &time_quantum);

if (time_quantum < 1)
{
    printf("\nPlease Enter valid input");
    return 0;
}

//taking input the arrival and burst times
for (int i = 0; i < n; ++i)
{
    printf("\nEnter the arrival time of Process %d:", i + 1);
    scanf("%d", &arrival_time[i]);
    printf("\nEnter the burst time of Process %d:", i + 1);
    scanf("%d", &burst_time[i]);
    copy_burst_time[i] = burst_time[i];
    if (arrival_time[i] < time_passed)
        time_passed = arrival_time[i];
}

int notEmpty = 1;
int min = INT_MAX;
int index = -1;

//Taking each process at a time
while (notEmpty)
{
notEmpty = 0;
min = INT_MAX;
index = -1;

//Finding the shortest burst time process
for (int i = 0; i < n; ++i)
{
    if (arrival_time[i] <= time_passed && burst_time[i] > 0)
    {
        notEmpty = 1;
        if (burst_time[i] < min)
        {
            min = burst_time[i];
            index = i;
        }
    }
}

//If found then processing forward
if (index != -1)
{
    //debugging
    // printf("%d \t%d \t\t%d \t%d \t\t%d\n", index+1, arrival_time[index], copy_burst_time[index], waiting_time[index], turnaround_time[index]);
    if (burst_time[index] > time_quantum)
    {
        burst_time[index] -= time_quantum;
        time_passed += time_quantum;
    }
    else
    {
        //if the process completes then calculating turnaround time.
        time_passed += burst_time[index];
        turnaround_time[index] = time_passed - arrival_time[index];
        burst_time[index] = 0;
        total_tt += turnaround_time[index];
    }
}
else
{
    time_passed++;
}

// printf("time passed: %d\n",time_passed);
}

// calculating waiting time
for (int i = 0; i < n; ++i)
{
    waiting_time[i] = turnaround_time[i] - copy_burst_time[i];
    total_wt += waiting_time[i];
}

// Output results
printf("\nPID \tarrival \tburst \twaiting \tturnaround\n");
for (int i = 0; i < n; ++i)
{
    printf("%d \t%d \t\t%d \t%d \t\t%d\n", i + 1, arrival_time[i], copy_burst_time[i], waiting_time[i], turnaround_time[i]);
}

printf("Average turnaround time: %f\n", total_tt * 1.0 / n);
printf("Average waiting time: %f\n", total_wt * 1.0 / n);

return 0;
}