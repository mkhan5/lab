#include<stdio.h>
//#include<conio.h>
int w[20],x[20],d;

void subset(int cs,int k,int r)
{
  int i;
  x[k]=1;
  if((cs+w[k])==d)
  {
    for(i=0;i<=k;i++)
      if(x[i]==1)
	printf("%d ",w[i]);
    printf("\n");
  }
  else
  {
   	if(cs+w[k]+w[k+1]<=d)
    		subset(cs+w[k],k+1,r-w[k]);
 	if((cs+r-w[k]>=d)&&(cs+w[k+1]<=d))
  	{
    		x[k]=0;
    		subset(cs,k+1,r-w[k]);
 	}
   }
}
main()
{
  int i,n,sum=0;
 	  printf("Enter the no. of elements: ");
  	  scanf("%d",&n);
  	  printf("Enter the elements in increasing order:\n");
  	  for(i=1;i<=n;i++)
               scanf("%d",&w[i]);
           printf("Enter the required sum(d): ");
           scanf("%d",&d);
           for(i=1;i<=n;i++)
   	     sum+=w[i];
  if(sum<d || w[1]>d)
    printf("Subset not possible!!\n");
  else
  {
  	printf("The possible subsets are:\n");
 	subset(0,1,sum);
  }
 }
