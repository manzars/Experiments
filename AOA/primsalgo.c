
#include<stdio.h>
int n,cost[10][10];

void prim(){
	int i,j,startVertex,endVertex;
	int k,nr[10],temp,minimumCost=0,tree[10][3];
	
	/*For first smallest edge*/
	temp=cost[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(temp>cost[i][j])
			{
				temp=cost[i][j];
				startVertex=i;
				endVertex=j;
			}
		}
	}
	
	/*Now we have first smallest edge in tree*/
	tree[0][0]=startVertex;
	tree[0][1]=endVertex;
	tree[0][2]=temp;
	minimumCost=temp;
	
	/*
	 Now we have to find min dis of each vertex from either startVertex or endVertex by initializing nr[] array
	 */
	 
	 for(i=0;i<n;i++)
	 {
		 if(cost[i][startVertex]<cost[i][endVertex])
			nr[i]=startVertex;
		else
			nr[i]=endVertex;
	}
	
	/*To indicate visited vertex initialize nr[] for them to 100*/
	nr[startVertex]=100;
	nr[endVertex]=100;
	
	/*Now find out remaining n-2 edges*/
	temp=99;
	for(i=1;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(nr[j]!=100&&cost[j][nr[j]]<temp)
			{
				temp=cost[j][nr[j]];
				k=j;
			}
		}
		
		/*Now i have got next vertex.*/
		
		tree[i][0]=k;
		tree[i][1]=nr[k];
		tree[i][2]=cost[k][nr[k]];
		minimumCost=minimumCost+cost[k][nr[k]];
		nr[k]=100;
		
		/*Now find if k is nearest to any vertex than its previous near value*/
		
		for(j=0;j<n;j++)
		{
			if(nr[j]!=100&&cost[j][nr[j]]>cost[j][k])
				nr[j]=k;
		}
		temp=99;
	}
	/*Now i have the answer , just going to print it */
	printf("\n The min spanning tree is :-\n ");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",tree[i][j]);
		printf("\n");
	}
		
	printf("\nMin cost : %d",minimumCost);
}


int main(){
	int i,j;
	
	printf("enter the number of vertices\n");
	scanf("%d",&n);
	
	printf("Enter the costs of the edges in matrix form\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&cost[i][j]);
		}
	}
		
	printf("\n The Matrix is :-\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",cost[i][j]);
		}
		printf("\n");
	}
	prim();
	return 0;
}

//Output
/*enter the number of vertices
7
Enter the costs of the edges in matrix form
99 25 99 99 99 10 99
25 99 14 99 99 99 12 
99 14 99 11 99 99 99
99 99 11 99 20 99 17
99 99 99 20 99 23 22
10 99 99 99 23 99 99
99 12 99 17 22 99 99

 The Matrix is :-
99	25	99	99	99	10	99	
25	99	14	99	99	99	12	
99	14	99	11	99	99	99	
99	99	11	99	20	99	17	
99	99	99	20	99	23	22	
10	99	99	99	23	99	99	
99	12	99	17	22	99	99	

 The min spanning tree is :-
 0	5	10	
4	5	23	
3	4	20	
2	3	11	
1	2	14	
6	1	12	

Min cost : 90

------------------
(program exited with code: 0)
Press return to continue
*/
