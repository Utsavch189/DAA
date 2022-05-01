#include <stdio.h>
int edge [10][10];
int G[10][10] ;

void bellman_ford(int n,int s,int e)
{
int dist[10];
int i,j,u,v;
for(i=1;i<=n;i++){

dist[i]=99999;
dist[s]=0;
}
for(i=1;i<=n-1;i++)
{
for(j=1;j<=e;j++)
{
u=edge [j][1];
v=edge[j][2];
if(dist[u]+G[u][v]<dist[v]) {
dist[v]=dist[u]+G[u][v];}}
}
for(i=1;i<=n;i++){

printf("%d ",dist[i]);}
}



int main(){
int i,j,u,v,n,w,e,s;
printf("Enter the number of vertices:\n");
scanf("%d",&n);
printf("Enter the number of edges:\n");
scanf("%d",&e);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
G[i][j]=0;
}
}
for(i=1;i<=e;i++)
{
printf("\nEnter start vertex,end vertex and cost of an edge:");
scanf("%d%d%d",&u,&v,&w);
G[u][v]=w;
edge[i][1]=u;
edge[i][2]=v;
 
}
printf("enter the sourse:");
scanf("%d",&s);
bellman_ford(n,s,e);
return 0;
}

