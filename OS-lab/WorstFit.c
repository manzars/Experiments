//Title: Implement dynamic partitioning placement algorithm of Worst Fit
//Name: Mohammed Rizwan
//Roll No: 16CO39

#include<stdio.h>

int main()
{
	 int nb,np,bsize[20],psize[20],fragment[20],temp,i,j,top=0;
	 static int barray[20],parray[20];
	 
	 printf("Enter no of Blocks: ");
	 scanf("%d",&nb);
	 printf("\nEnter the size of the blocks: \n");
	 for(i=0;i<nb;i++)
	 {
		 printf("Block no %d: ",i+1);
		 scanf("%d",&bsize[i]);
	 }
	 
	 printf("\nEnter no of processes: ");
	 scanf("%d",&np);
	 printf("\nEnter the size of the processes: \n");
	 for(i=0;i<np;i++)
	 {
		 printf("Process no %d: ",i+1);
		 scanf("%d",&psize[i]);
	  }
	  
	  for(i=0;i<np;i++)
	  {
		  for(j=0;j<nb;j++)
		  {
			   if(barray[j]!=1)
			   {
				   temp=bsize[j]-psize[i];
				   if(temp>=0)
				   {
					   if(top<temp)
					   {
						    parray[i]=j;
						    top=temp;
						  }
						}
				   }
		fragment[i]=top;
		barray[parray[i]]=1;
		top=0;
	}
}

printf("Process no\t\tProcess size\t\tBlock Number\t\tBlock size\t\tfragment");
for(i=0;i<np;i++)
{
	 printf("\n\t%d\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d ",i+1,psize[i],parray[i],bsize[parray[i]],fragment[i]);
}

return 0;
}


/*OUTPUT
 
  Enter no of Blocks: 5

Enter the size of the blocks: 
Block no 1: 12
Block no 2: 12
Block no 3: 15
Block no 4: 42
Block no 5: 45

Enter no of processes: 5

Enter the size of the processes: 
Process no 1: 10
Process no 2: 15
Process no 3: 42
Process no 4: 41
Process no 5: 5
Process no		Process size		Block Number		Block size		fragment
	1			10			4			45			35 
	2			15			0			12			0 
	3			42			0			12			0 
	4			41			0			12			0 
	5			5			0			12			0 
 
*/
