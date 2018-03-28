#include<stdio.h>

int n,a[10][10],t[10];
void dfs(int u,int s[])
{
  int i;
  s[u]=1;
  for(i=0; i<n; i++)
    if(a[u][i]==1 && s[i]==0)
      {
        dfs(i,s);
      }
}

main()
{
  int i,s[10],j,f=1;

  printf("\nenter no of nodes\n");
  scanf("%d",&n);
  printf("enter adjacency matrix\n");
  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      scanf("%d",&a[i][j]);
  for(i=0; i<n; i++)
    s[i]=0;
  dfs(0,s);
  for(i=0; i<n; i++)
    if(s[i]==0)
      {
        f=0;
        break;
      }
  if(f==0)
    printf("\nnot connected\n");
  else
    printf("\n connected\n");

}
