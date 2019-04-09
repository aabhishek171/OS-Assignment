#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
int main()
{
	int n;			//total_process
	int burst_time[5][3];
	printf("Enter the number of process you want to enter = ");
	scanf("%d",n);
	
	printf("Enter burst time for each process = ")
	for(int i=0;i<n;i++)
	{
		scanf("%d",burst_time[i][0]);
	}
}
