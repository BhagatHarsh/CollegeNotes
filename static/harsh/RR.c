//AU2140084 Harsh Bhagat

//Includes
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


//Main
int main()
{

//Taking number of processes as input from the user.
int n, time_passed = INT_MAX;
printf("\nEnter the Number of Processes: ");
scanf("%d", &n);

if (n <= 1)
{
    printf("\nPlease Enter valid input\n");
    return 0;
}

//declaring all the necessary arrays and variables
int arrival_time[n], burst_time[n], waiting_time[n], turnaround_time[n];
float copy_burst_time[n], copy_arrival_time[n];
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
    printf("\nEnter the arrival time of Process %d: ", i + 1);
    scanf("%d", &arrival_time[i]);
    printf("\nEnter the burst time of Process %d: ", i + 1);
    scanf("%d", &burst_time[i]);

    //creating copies
    copy_burst_time[i] = burst_time[i];
    copy_arrival_time[i] = arrival_time[i];

    //getting the shortest arrival time
    if (arrival_time[i] < time_passed)
        time_passed = arrival_time[i];
}

int notEmpty = 1;
int min = INT_MAX;
int index = -1;

while (notEmpty)
{
notEmpty = 0;
min = INT_MAX;
index = -1;
float passing = time_passed + 0.1;

for (int i = 0; i < n; ++i)
{
    if (copy_arrival_time[i] <= passing && copy_burst_time[i] > 0)
    {
        notEmpty = 1;
        if (copy_arrival_time[i] < min)
        {
            min = copy_arrival_time[i];
            index = i;
        }
    }
}

if (index != -1)
{
    if (copy_burst_time[index] > time_quantum)
    {
        copy_burst_time[index] -= time_quantum;
        time_passed += time_quantum;
        copy_arrival_time[index] = time_passed + 0.1;
    }
    else
    {
        time_passed += copy_burst_time[index];
        turnaround_time[index] = time_passed - arrival_time[index];
        copy_burst_time[index] = 0;
        total_tt += turnaround_time[index];
    }
}
else
{
    time_passed++;
}
}

//calculating the waiting of each algorithm.
for (int i = 0; i < n; ++i)
{
    waiting_time[i] = turnaround_time[i] - burst_time[i];
    total_wt += waiting_time[i];
}

printf("\nPID \tarrival \tburst \twaiting \tturnaround\n");
for (int i = 0; i < n; ++i)
{
    printf("%d \t%d \t\t%d \t%d \t\t%d\n", i + 1, arrival_time[i], burst_time[i], waiting_time[i], turnaround_time[i]);
}

printf("Average turnaround time: %f\n", total_tt * 1.0 / n);
printf("Average waiting time: %f\n", total_wt * 1.0 / n);

return 0;
}