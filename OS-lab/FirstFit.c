//Title: Implement dynamic partitioning placement algorithm of FirstFit
//Name: Mohammed Rizwan
//Roll No: 16CO39


#include<stdio.h>

int main()
{
	 int nb,np,bsize[20],psize[20],allocation[20],i,j,flags[20];
	 
	 for(i=0;i<20;i++)
	 {
		 flags[i]=0;
		 allocation[i]=-1;
	 }
	 
	 printf("\nEnter no of Blocks: ");
	 scanf("%d",&nb);
	 printf("\nEnter the size of the blocks:\n ");
	 for(i=0;i<nb;i++)
	 {
		 printf("Block no %d: ",i+1);
		 scanf("%d",&bsize[i]);
	 }
	 printf("\nEnter the no of Processes: ");
	 scanf("%d",&np);
	 printf("\nEnter the size of the processes:\n ");
	 for(i=0;i<np;i++)
	 {
		 printf("Process no %d: ",i+1);
		 scanf("%d",&psize[i]);
	  }
	  
	  //Allocation as per First Fit
	  for(i=0;i<np;i++)
	  {
		  for(j=0;j<nb;j++)
		    {
				 if(flags[j]==0 && bsize[j]>=psize[i])
				 {
					 allocation[j]=i;
					 flags[j]=1;
					 break;
				  }
			  }
		  }
				  
		//Display allocation detail
		printf("\nBlock no\tSize\t\tProcess no\t\t  size");
		for(i=0;i<nb;i++)
		{
			printf("\n  %d  \t\t %d \t\t",i+1,bsize[i]);
			if(flags[i]==1)
				printf("%d  \t\t\t %d",allocation[i]+1,psize[allocation[i]]);
			else
				printf("Not Allocated");
			}
		return 0;
	}
				
	  
/*
  OUTPUT
  
Enter no of Blocks: 5

Enter the size of the blocks:
 Block no 1: 10
Block no 2: 15
Block no 3: 42
Block no 4: 45
Block no 5: 10

Enter the no of Processes: 4

Enter the size of the processes:
 Process no 1: 20
Process no 2: 45
Process no 3: 12
Process no 4: 41

Block no	Size		Process no		 size
  1  		 10 		Not Allocated
  2  		 15 		3  		          12
  3  		 42 		1  		          20
  4  		 45 		2  		          45
  5  		 10 		Not Allocated 

*/  
	  
	  
	  
	  
	  
	   
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
