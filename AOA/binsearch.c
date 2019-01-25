/*
* TITLE : BINARY SEARCH                                                        
* DISCRIPTION : TO PERFORM ANALYSIS OF BINARY SEARCH
* NAME : Mohammed Rizwan
* ROLLNO : 16CO39
*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int binary_search(int a[],int n,int x)
{
	int mid=n/2;
	int high=n-1,low=0;
		while(high>=low)
     	{
     		if(a[mid]==x)
     			return mid;
			if(x>a[mid])
				low=mid+1;       //SEARCH THE RIGHT SUBARRAY
			else
				high=mid-1;      //SEARCH THE LEFT SUBARRAY
				mid=(low+high)/2;
		}
		return -1;
		}

int main()
{
	int i,a[MAX],no,x;
	printf("ENTER THE NO OF ELEMENTS :: ");
	scanf("%d",&no);
	printf("ENTER THE ELEMENTS OF AN ARRAY :: \n");
	for(i=0;i<no;i++)
	scanf("%d",&a[i]);
	printf("THE NO YOU WANT TO SEARCH::");
	scanf("%d",&x);
	if(binary_search(a,no,x)!=-1)
		printf("\nELEMENT FOUND AT %d INDEX IN AN ARRAY",binary_search(a,no,x));
	else 
		printf("\nTHE ELEMENT IS NOT FOUND");
}
/*

OUTPUT :
-------------------------------------------
ENTER THE NO OF ELEMENTS :: 4
ENTER THE ELEMENTS OF AN ARRAY :: 
55
85
68
18
THE NO YOU WANT TO SEARCH::18

ELEMENT FOUND AT 3 INDEX IN AN ARRAY

--------------------------------------------
*/
