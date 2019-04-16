#include<stdio.h>
int main() 
{ 
  int i,j,n,time,temp,remaining,flag=0,time_quantum; 
  int wait_time=0,turnaround_time=0,arriving_time[10],burst_time[10],remaininging_time[10],p[10],priority[103]; 
  printf("Enter Total process:\t "); 
  scanf("%d",&n); 
  remaining=n; 
  for(i=0;i<n;i++) 
  { 
    printf("Enter Arrival Time for Process P%d :",i+1); 
    scanf("%d",&arriving_time[i]); 
    printf("Enter Burst Time for Process P%d :",i+1);
    scanf("%d",&burst_time[i]);
    printf("Enter Priority for Process P%d :",i+1);
    scanf("%d",&priority[i]);
    p[i]=i+1; 
    remaininging_time[i]=burst_time[i]; 
  } 
  printf("Enter Time Quantum:\t"); 
  scanf("%d",&time_quantum); 
  printf("\n\nProcess\tArrival Time\tBurst Time\tPriority\tTurn Around Time\tWaiting Time\n\n"); 
  for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(priority[j]<priority[i])
                i=j;
        }
 
        temp=priority[i];
        priority[i]=priority[i];
        priority[i]=temp;
 
        temp=burst_time[i];
        burst_time[i]=burst_time[i];
        burst_time[i]=temp;
 
        temp=p[i];
        p[i]=p[i];
        p[i]=temp;

  for(time=0,i=0;remaining!=0;) 
  { 
    if(remaininging_time[i]<=time_quantum && remaininging_time[i]>0) 
    { 
      time+=remaininging_time[i]; 
      remaininging_time[i]=0; 
      flag=1; 
    } 
    else if(remaininging_time[i]>0) 
    { 
      remaininging_time[i]-=time_quantum; 
      time+=time_quantum; 
    } 
    if(remaininging_time[i]==0 && flag==1) 
    { 
      remaining--; 
      printf("P[%d]\t  %d\t\t   %d\t\t%d\t\t%d\t\t\t%d\n",i+1,arriving_time[i],burst_time[i],priority[i],time-arriving_time[i],time-arriving_time[i]-burst_time[i]); 
      wait_time+=time-arriving_time[i]-burst_time[i]; 
      turnaround_time+=time-arriving_time[i]; 
      flag=0; 
    } 
    if(i==n-1) 
      i=0; 
    else if(arriving_time[i+1]<=time) 
      i++; 
    else 
      i=0; 
   }
}
  return 0; 
}
