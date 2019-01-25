/*
TITLE : MERGE SORT
DISCRIPTION : TO PERFORM ANALYSIS OF MERGE SORT
NAME : Mohammed Rizwan
ROLLNO : 16CO39
*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 10


void combine(int a[MAX],int low,int mid,int high)
{
	int i,j,k;
	int temp[MAX];
	k=low;             //k AS INDEX FOR ARRAY temp
	i=low;			   //i AS INDEX FOR LEFT SUBARRAY
	j=mid+1;		   //j AS INDEX FOR RIGHR SUBARRAY
	while(i<=mid && j<=high)
	{
		if(a[i]<=a[j])
		{
			temp[k]=a[i];
			i++;
     		k++;
		}
		else
		{
			temp[k]=a[j];
			j++;
			k++;
		}
	}
	while(i<=mid)      //COPYING REMAINING ELEMENT OF LEFT SUBARRAY
	{
		temp[k]=a[i];
     	i++;
		k++;
	}
	while(j<=high)     //COPYING REMAINING ELEMENT OF LEFT SUBARRAY
	{
		temp[k]=a[j];
		j++;
		k++;
	}
	for(k=low;k<=high;k++)
		a[k]=temp[k];
}
void Display(int a[MAX],int n)
{
	int i;
	printf("THE SORTED ARRAY IS :\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
	void MergeSort(int a[MAX],int low,int high)
{
	int mid;
	if(low<high)
	{
     	mid=(low+high)/2;          //SPLIT THE LIST AT MID
		MergeSort(a,low,mid);    //LEFT SUBARRAY
		MergeSort(a,mid+1,high);   //RIGHT SUBARRAY
		combine(a,low,mid,high);   //MERGING OF TWO SUBARRAY
	}
}
	int main()
{
	int i,low=0,n;
	printf("MERGE SORT :: \n");
	printf("ENTER THE LENGTH OF LIST : ");
	scanf("%d",&n);
	int a[MAX];
	printf("ENTER THE ELEMENT OF A LIST :\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	MergeSort(a,low,n-1);
	Display(a,n);
}
/*
OUTPUT :
------------------------------------
MERGE SORT :: 
ENTER THE LENGTH OF LIST : 5
ENTER THE ELEMENT OF A LIST :
85
9
36
45
25
THE SORTED ARRAY IS :
9	25	36	45	85	
-------------------------------------
*/
