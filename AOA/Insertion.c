/*Title: Inserion Sort												Date of perf.: 09/01/2018

Description: TO perform insertion and selection sort and compare 
thier time complexities in the best, eorst and average case. 

Student Name : Mohammed Rizwan												Roll No: 16CO39
 */

#include<stdio.h>
void main()
{
    int a[10],no,i,j,key;
    
    printf("Enter the size of An Array:\n");
    scanf("%d",&no);
    
    printf("Enter the Elements of An Array:\n");
    
    for(i=0;i<no;i++)
        scanf("%d",&a[i]);

    for(i=1;i<no;i++)
        {
            key=a[i];
            j=i-1;

            while(key<a[j] && j>=0)
                {
                    a[j+1] = a[j];
                    j--;
                }
            a[j+1]=key;
        }
    printf("Sorted Array:\n");
        for(i=0;i<no;i++)
            printf("%d\n",a[i]);
}
/*
 * OUTPUT:

 Enter the size of An Array: 5

 Enter the Elements of An Array:
 14
 3
 65
 2
 1
 Sorted Array:
 1
 2
 3
 14
 65
*/


