 #include<stdio.h>
 
 void quick_sort(int a[],int lower,int upper)
 {
     int i;
     if(lower<upper)
     {
		    i=split(a,lower,upper);
		    quick_sort(a,lower,i-1);
		    quick_sort(a,i+1,upper);
		}
	}
	
int split(int arr[],int lower,int upper)
{ 
	int pivot=lower,a=lower,b=upper,temp;
	while(b>=a)
	{
		 while(arr[a]<arr[pivot])
		 a++;
		 while(arr[b]>arr[pivot]
		 b--;
		 
		 if(b>a)
   {
	   temp=arr[a];
	   arr[a]=arr[b];
	   arr[b]=temp;
	}
	
	temp=arr[pivot];
	arr[pivot]=arr[b];
	arr[b]=temp;
		 
    return b;
}		 
		 

int main()
{
	 int i,no;
	 printf("Enter size of array");
	 scanf("%d",&no);
	 int a[no];
	 printf("\nEnter elements of  araay");
	 for(i=0;i<no;i++)
	 {
		scanf("%d",&a[i]);
	}
}
