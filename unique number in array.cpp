#include<iostream>
using namespace std;
/*void sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]>a[i]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}*/
int main(){
	int a[5]={2,3,2,8,3};
	int ans=0;
	//sort(a,5);
	for(int i=0;i<5;i++){
		ans=a[i]^ans;
	}
	cout<<ans;
	return 0;
}
