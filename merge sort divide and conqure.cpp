#include<stdio.h>
void merge(int a[],int l,int m,int u){
	int i=l;
	int j=m+1;
	int k=l;
	int b[5];
	while(i<=m && j<=u){
		if(a[i]<a[j]){
			b[k]=a[i];
			i++;
		}
		else{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>m){
		while(j<=u){
			b[k]=a[j];
			k++;
			j++;
		}
	}
	else{
		while(i<=m){
			b[k]=a[i];
			k++;
			i++;
		}
	}
	for(k=l;k<=u;k++){
		a[k]=b[k];
	}
}

void m_s(int a[],int l,int u){
	if(l<u){
		int mid=(l+u)/2;
		m_s(a,l,mid);
		m_s(a,mid+1,u);
		merge(a,l,mid,u);
	}
}

int main(){
	int a[5]={3,9,1,4,2};
	m_s(a,0,4);
	for(int i=0;i<5;i++){
		printf("%d  ",a[i]);
	}
	return 0;
}
