//Title: Implement SJF CPU scheduling Algorithm
//Name: Mohammed Rizwan
//Roll No: 16CO39

#include<stdio.h>
 
int main()
{
    int n,i,j,p[20],bt[20],wt[20],tat[20],min,temp;
    float avg_wt=0,avg_tat=0;
    
    printf("\n Enter total Number of Process: ");
    scanf("%d",&n);
    
    printf("\nEnter Burst Time\n");
    for(i=0;i<n;i++)
    { 
		printf("P[%d]:",i+1);
		scanf("%d",&bt[i]);
		p[i]=i+1;
	}
	
	//Sorting Burst time in ascending order using Selection sort
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(bt[j]<bt[min])
				min=j;
		}
			temp=bt[i];
			bt[i]=bt[min];
			bt[min]=temp;
			
			temp=p[i];
			p[i]=p[min];
			p[min]=temp;
	}
		
	wt[0]=0;  //waiting time for first process is 0
	
	for(i=0;i<n;i++)
	{
		 wt[i]=0;
		 for(j=0;j<i;j++)
		 {
			 wt[i]+=bt[j];
		 }
	 }
	printf("\nProcess\t\tBurst Time\t\tWaiting Time\t\tTurnAround Time");
	for(i=0;i<n;i++)
	{
		tat[i]=bt[i]+wt[i];
		avg_tat+=tat[i];
		avg_wt+=wt[i]; 
		printf("\n P[%d]  \t\t\t  %d  \t\t\t  %d  \t\t\t  %d",p[i],bt[i],wt[i],tat[i]);
	}
	
	printf("\nAverage Waiting Time: %f",avg_wt/=n);
	printf("\nAverage TurnAround Time: %f",avg_tat/=n);
	
	return 0;
}

		
		
/*
 OUTPUT
 
  Enter total Number of Process: 4

Enter Burst Time
P[1]:10
P[2]:5
P[3]:8
P[4]:15

Process		Burst Time		Waiting Time		TurnAround Time
 P[2]  			  5  			  0  			  5
 P[3]  			  8  			  5  			  13
 P[1]  			  10  			  13  			  23
 P[4]  			  15  			  23  			  38

Average Waiting Time: 10.250000
Average TurnAround Time: 19.750000

*/
		
			
			
			
			
			
