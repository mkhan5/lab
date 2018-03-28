#include<stdio.h>

int a[10][10],q[10],visit[10],n,i,j,t;
void bfs (int v)
{
  static int f=0,r=-1;
  for(i=0; i<n; i++)
    if(a[v][i]==1 && visit[i]==0)
      q[++r]=i;
  if (f<=r)
    {
      visit [q[f]] =1;
      bfs (q[f++]);
    }
}

main()
{
  int v;

  printf("\nenter the no. of nodes\n");
  scanf("%d",&n);
  printf(" \n enter the graph\n");
  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      scanf("%d",&a[i][j]);
  printf("enter the starting vertex\n");
  scanf("%d",&v);
  visit[v]=1;
  bfs(v);
  printf("the nodes that reachable are\n");
  for(i=0; i<n; i++)
    if(visit[i]==1 && i!=v)
      printf("%d\n",i);
}
