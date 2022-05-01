#include<stdio.h>
int max=99999;
int m[5][5];
int s[5][5];
void matrix_chain(int p[],int n){

	int i,j,k,l,q;
	for( i=1;i<n;i++){
		m[i][i]=0;
	}
	for(l=2;l<=n;l++){
		for(i=1;i<n-l+1;i++){
			j=i+l-1;
		
			m[i][j]=max;
			for(k=i;k<j;k++){
				q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
				if(q<m[i][j]){
					m[i][j]=q;
					s[i][j]=k;
				}
			}
		}
	}
}
void parenthesis(int i,int j){
	if(i==j){
		printf("A%d",i);
		}
	else{
		printf("(");
		parenthesis(i,s[i][j]);
		parenthesis(s[i][j]+1,j);
		printf(")");
	}
}
int main(){
    int n;
	int p[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&p[i]);
	}

matrix_chain(p,n);
printf("%d",m[1][n-1]);
parenthesis(1,n-1);	

	return 0;
}
