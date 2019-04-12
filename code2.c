#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
int main()
{
	int n;			//total_process
	int i,j;
	int temp;		//temporary variable
	int burst_time[5];
	int arrival_time[5];
	int priority[5];
	printf("Enter the number of process you want to enter = ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter Burst Time for P%d Process = ",i);
		scanf("%d",&burst_time[i]);
		
		printf("Enter Arrival Time for P%d Process = ",i);
		scanf("%d",&arrival_time[i]);
		
		printf("Enter Priority for P%d Process = ",i);
		scanf("%d",&priority[i]);
	}
	
	for(i=0;i<n-1;i++) 
	{ 
		for(j=i+1;j<n;j++)
 		{
		    if(priority[i]>priority[j]) 
			{
			 	temp=priority[i];
				priority[i]=priority[j]; 
				priority[j]=temp;
		    	}
		}
	}
}
