#include<stdio.h>
//#include<conio.h>
int x[20],count=0;
 void display_solution(int n)
     {
	int i,j;
	char cb[50][50];
            count=count+1;
	for(i=1;i<=n;i++)
	   for(j=1;j<=n;j++)
	     cb[i][j]='x';
	for(i=1;i<=n;i++)
	   cb[i][x[i]]='Q';
             printf("The solution %d\n",count);
	       for(i=1;i<=n;i++)
	       {
	         for(j=1;j<=n;j++)
		   printf("%c\t",cb[i][j]);
	             printf("\n");
	       }	
	  printf("\n");
       }


int place(int k,int i)
{
int j;
for(j=1;j<=k-1;j++)
  if(x[j]==i || (abs(x[j]-i)==abs(j-k)))	      
     return 0;
return 1;      
}


void nqueens(int k,int n)
{
int i,j;
 for(i=1;i<=n;i++)
  {
  if(place(k,i)) 
   {
     x[k]=i;
     if(k==n)
       display_solution(n);
     else
       nqueens(k+1,n);
   }
 }
} 
  
void main()
  {
   int n;
   int j;
   for(j=1;j<=0;j++)
     printf("Im here\n");
   printf("enter no of queens\n");
   scanf("%d",&n);
   nqueens(1,n);
   if(count==0)
    printf("No solution for %d queens probem\n");
     
   }
