//title: implement page replacement policies(FIFO)
//Name: Mohammed Rizwan
//Roll no: 16CO39

#include<stdio.h>

int main()
{
	 int np,i,j,k,frame[50],page[50],nf,avail,count=0;
	 
	 printf("Enter the no of the Pages: ");
	 scanf("%d",&np);
	 
	 printf("\nEnter the Page no: ");
	 for(i=1;i<=np;i++)
	 {
		 scanf("%d",&page[i]);
	 }
	 printf("\nEnter the no of Frames: ");
	 scanf("%d",&nf);
	 
     for(i=0;i<nf;i++)
     {
		 frame[i]=-1;
	  }
	  j=0;
	  printf("Ref String\t\tPage frame\n");
	  for(i=1;i<=np;i++)
	  {
		  printf("  %d\t\t",page[i]);
		  avail=0;
		  for(k=0;k<nf;k++)
			   if(frame[k]==page[i])
						avail=1;
			   if(avail==0)
		          {
					  frame[j]=page[i];
					  j=(j+1)%nf;
					  count++;
					  for(k=0;k<nf;k++)
						  printf("%d\t",frame[k]);
				}
				  printf("\n");
			  }
			  printf("\nPage miss is %d",count);
			  printf("\nPage hit is %d",np-count);
			  return 0;
}

/*OUTPUT
 
 Enter the no of the Pages: 20       

Enter the Page no: 1 2 3 4 2 1 5 6 2 1 2 3 7 6 3 2 1 2 3 6

Enter the no of Frames: 3
Ref String		Page frame
  1		1	-1	-1	
  2		1	2	-1	
  3		1	2	3	
  4		4	2	3	
  2		
  1		4	1	3	
  5		4	1	5	
  6		6	1	5	
  2		6	2	5	
  1		6	2	1	
  2		
  3		3	2	1	
  7		3	7	1	
  6		3	7	6	
  3		
  2		2	7	6	
  1		2	1	6	
  2		
  3		2	1	3	
  6		6	1	3	

Page miss is 16
Page hit is 4
*/
