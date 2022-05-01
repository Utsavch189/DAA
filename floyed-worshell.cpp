#include<stdio.h>
int max=99999;
#define v 4
void floyed(int graph[][v]){
	int dist[v][v];
	int i,j,k;
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
		dist[i][j]=graph[i][j];	
		}
	}
	for(k=0;k<v;k++){
		for(i=0;i<v;i++){
			for(j=0;j<v;j++){
				if(dist[i][k]+dist[k][j]<dist[i][j]){
					dist[i][j]=dist[i][k]+dist[k][j];
				}
			}
		}
	}
		for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			if(dist[i][j]==max){
				printf("%7s","max");
				
			}
			else{
				printf("%7d",dist[i][j]);
			}
			
		}
		printf("\n");
	}	
}
int main(){

	int dist[v][v];
	int graph[v][v]={
	{0,5,max,10},
	{max,0,3,max},
	{max,max,0,1},
	{max,max,max,1},
	};
	floyed(graph);

	
	return 0;
}
