#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
int main()
{
	int n;		//total_process
	int i;
	int burst_time[5];
	int arrival_time[5];
	printf("Enter the number of process you want to enter = ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter Burst Time for P%d Process = ",i+1);
		scanf("%d",&burst_time[i]);
		
		printf("Enter Arrival Time for P%d Process = ",i+1);
		scanf("%d",&arrival_time[i]);
	}
}
