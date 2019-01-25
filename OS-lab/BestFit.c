//Title: Implement dynamic partitioning placement algorithm of Best Fit
//Name: Mohammed Rizwan
//Roll No: 16CO39

#include<stdio.h>

int main()
{
	 int nb,np,bsize[20],psize[20],fragment[20],i,j,temp,lowest=9999;
	 static int barray[20],parray[20];
	 
	 printf("Enter no of Blocks: ");
	 scanf("%d",&nb);
	 printf("\nEnter the size of the blocks: \n");
	 for(i=1;i<=nb;i++)
	 {
		 printf("Block no %d: ",i);
		 scanf("%d",&bsize[i]);
	 }
	 printf("\nEnter the no of processes: ");
	 scanf("%d",&np);
	 printf("\nEnter the size of the processes: \n");
	 for(i=1;i<=np;i++)
	 {
		 printf("Process no %d: ",i);
		 scanf("%d",&psize[i]);
	  }
	  
	  for(i=1;i<=np;i++)
	  {
		   for(j=1;j<=nb;j++)
		   {
			   if(barray[j]!=1)
			   {
				   temp=bsize[j]-psize[i];
				   if(temp>=0)
						if(lowest>temp)
						{
							 parray[i]=j;
							 lowest=temp;
						 }
					 }
				 }
			fragment[i]=lowest;
			barray[parray[i]]=1;
			lowest=10000;
		}
		
		printf("\n  Process no\t\tProcess Size\t\tBlock no\t\tBlock Size\t\tfragment");
		for(i=1;i<=np && parray[i]!=0;i++)
			printf("\n\t%d\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d ",i,psize[i],parray[i],bsize[parray[i]],fragment[i]);
		return 0;
} 
	  
	  
	  
/*
 * OUTPUT
 * Enter no of Blocks: 5

Enter the size of the blocks: 
Block no 1: 12
Block no 2: 12
Block no 3: 15
Block no 4: 42
Block no 5: 45

Enter the no of processes: 5

Enter the size of the processes: 
Process no 1: 0
Process no 2: 15
Process no 3: 42
Process no 4: 41
Process no 5: 5

  Process no		Process Size		Block no		Block Size		fragment
	1			0			1			12			12 
	2			15			3			15			0 
	3			42			4			42			0 
	4			41			5			45			4 
	5			5			2			12			7 

*/
	  
	  
