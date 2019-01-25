//Step 1 : find the smallest element and swap it with any element at first position
//Step 2: now leave the first element and again find smallest element and swap it with the second one..and so on
/*
Title: Selection Sort												Date of perf.: 09/01/2018

Description: TO perform insertion and selection sort and compare 
thier time complexities in the best, eorst and average case. 

Student Name : Mohammed Rizwan												Roll No: 16CO39
* */

#include<stdio.h>
void main()
{
    int a[10],no,i,j,temp,min;
    
    printf("Enter the size of An Array:\n");
    scanf("%d",&no);
    
    printf("Enter the Elements of An Array:\n");
    
    for(i=0;i<no;i++)
        scanf("%d",&a[i]);
        
	for(i=0;i<no;i++)
		{
				min=i;
				for(j=i+1;j<no;j++)
					{
							if(a[min]>a[j])
								min=j;
					}
				temp = a[i];
				a[i] = a[min];
				a[min] = temp;
		}
	printf("Sorted Array:\n");
        for(i=0;i<no;i++)
            printf("%d\n",a[i]);
}		
/*
 OUTPUT:
Enter the size of An Array:
5
Enter the Elements of An Array:
32
12
2
65
1
Sorted Array:
1
2
12
32
65


------------------
(program exited with code: 0)
Press return to continue
*/s


 
