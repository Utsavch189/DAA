#include<stdio.h>
int a[10][10];
int V,E;
void prims(){
	int n=1,c=0,min,i,j,u,v;
	int vis[10]={0};

	vis[1]=1;
	while(n<V){
		min=99;
		for(i=1;i<=V;i++){
			for(j=1;j<=V;j++){
				if(a[i][j]<min && vis[i]==1){
					min=a[i][j];
					u=i;
					v=j;
				}
			}
		}
		
			if(vis[v]==0){
		printf("%d  %d\n",u,v);
		c=c+min;
		n++;
		vis[v]=1;
		
	}
	a[u][v]=99;
	a[v][u]=99;
	}
	

	printf("cost is=%d",c);
}
int main(){
	int i,j,u,v,w;
	printf("enter the number of vertex and edge\n");
	scanf("%d%d",&V,&E);
	for(i=1;i<=V;i++){
		for(j=1;j<=V;j++){
			a[i][j]=99;
		}
	}
	for(i=1;i<=E;i++){
		printf("enter start vertex,end vertex,weight of vertex\n");
		scanf("%d%d%d",&u,&v,&w);
		a[u][v]=w;
		a[v][u]=w;
	}
	prims();
	return 0;
}
