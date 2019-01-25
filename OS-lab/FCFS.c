//Title: Implement FCFS CPU scheduling Algorithm
//Name: Mohammed Rizwan 
//Roll No: 16CO39


#include<stdio.h>

int main()
{
	 int n,bt[20],wt[20],tat[20],i,j;
	 float avg_wt=0,avg_tat=0;
	 
	 printf("\nEnter total Number of Process: ");
	 scanf("%d",&n);
	 
	 printf("\nEnter Burst Time\n");
	 for(i=0;i<n;i++)
	 {
		 printf("P[%d]:",i+1);
		 scanf("%d",&bt[i]);
	 }
	 
	 wt[0]=0; //waiting time for first process is 0
	 
	 //calculating waiting time
	 for(i=0;i<n;i++)
	 {
		wt[i]=0;
		for(j=0;j<i;j++)
		{
			wt[i]+=bt[j];
		}
	}
	 printf("\nProcess\t\tBurst Time\t\tWaiting Time\t\tTurnAround Time\n");
	 //calculating turnAround Time
	 for(i=0;i<n;i++)
	 {
		 tat[i]=bt[i]+wt[i];
		 avg_tat=avg_tat+tat[i];
		 avg_wt=avg_wt+wt[i];
		 printf("\n P[%d]  \t\t    %d   \t\t   %d   \t\t    %d",i,bt[i],wt[i],tat[i]);
	 }
	 
	 printf("\nAverage Waiting Time: %f",avg_wt/=n);
	 printf("\nAverage TurnAround Time: %f",avg_tat/=n);
	 
	 return 0;
}  
		 
		 
/*OUTPUT
 
 Enter total Number of Process: 5

Enter Burst Time
P[1]:10
P[2]:1
P[3]:2
P[4]:1
P[5]:5

Process		Burst Time		Waiting Time		TurnAround Time

 P[0]  		    10   		   0   		    10
 P[1]  		    1   		   10   		    11
 P[2]  		    2   		   11   		    13
 P[3]  		    1   		   13   		    14
 P[4]  		    5   		   14   		    19

Average Waiting Time: 9.600000
Average TurnAround Time: 13.400000
*/
	 
		 
		 
		 
		 
	 
			
			
			
		 
	 
