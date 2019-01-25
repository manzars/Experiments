#include<stdio.h>
#include<string.h>

int max(int a,int b)
{
	return (a>b)?a:b;       //finding max value
}
	 
	 
	 
	 
	 
int lcs(char *X,char *Y,int m,int n)
{ 
   int l[m+1][n+1];
   int i,j;
   for(i=0;i<=m;i++)
       {
       for(j=0;j<=n;j++)
            {
                if(i==0 || j==0)    
                      l[i][j]=0;              //first row & coloumn fill with 0
                else if(X[i-1]==Y[j-1])
                      l[i][j]=l[i-1][j-1]+1;         //if matching is found 
                else
					  l[i][j]=max(l[i][j-1],l[i-1][j]);       //if matching is not found
			}
		}
	return l[m][n];               //returning the element
}
    






int main()
{
  char x[50],y[50];
  int res,m,n;
  printf("Enter first String : ");
  scanf("%s",x);
  printf("Enter Second String : ");
  scanf("%s",y);                         //taking strings from user
  m=strlen(x);
  n=strlen(y);                           //find length of string
  res=lcs(x,y,m,n);
  printf("Result=%d",res);
  return 0;
}
