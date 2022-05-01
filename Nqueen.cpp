#include<stdio.h>
#include<math.h>
int x[10];
int flag=0;
int place(int k,int i){
	for(int j=1;j<=k-1;j++){
		if((x[j]==i)  || abs(j-k)==abs(x[j]-i)){
			return 0;
		}
	}
	return 1;
}
void display(int n){
	flag++;
	printf("\nTotal solutions=%d",flag);
	printf("\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(x[i]==j){
				printf("\tQ");
			}
			else{
				printf("\t_");
			}
		}
		printf("\n");
	}
}
void nqueen(int k,int n){
	for(int i=1;i<=n;i++){
		if (place(k,i)==1){
			x[k]=i;
			if(k==n){
				display(k);
			
			}
		
			else{
				nqueen(k+1,n);
			}	
		}
	
	}
}


int main(){
	nqueen(1,12);
	return 0;
}
