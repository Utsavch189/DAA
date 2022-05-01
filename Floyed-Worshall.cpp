#include<stdio.h>
int max=99999;
void Floyed_Worshall(int G[10][10],int n){
	int i,j,k;
	for(k=1;k<=n;k++){
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(G[i][k]+G[k][j]<G[i][j]){
					G[i][j]=G[i][k]+G[k][j];
				}
			}
		}
	}
}

int main(){
	int n,e,u,v,w,i,j,k,G[10][10];
	printf("Enter the vertex number=\n");
	scanf("%d",&n);
	printf("Enter the edges number=\n");
	scanf("%d",&e);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j){
				G[i][j]=0;
			}
			else{
				G[i][j]=max;
			}
		}
	}
	for(i=1;i<=e;i++){
		printf("enter start vertex,end vertex,cost of an edge=");
		scanf("%d%d%d",&u,&v,&w);
		G[u][v]=w;
	}
	Floyed_Worshall( G, n);
	printf("The matrics==\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d ",G[i][j]);
		}
		printf("\n");
	}
	return 0;
}
