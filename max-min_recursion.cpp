#include<iostream>
using namespace std;

int Max,Min;
int a[5];

void maxmin(int i,int j){
	int max1,min1;
	
	int mid=(i+j)/2;
	if(i==j){
		Max=a[i];
		Min=a[i];
	}
	else if(i==j-1){
		if(a[i]<a[j]){
			Max=a[j];
			Min=a[i];
		}
		else{
			Max=a[i];
			Min=a[j];
		}
	}
	else{
		maxmin(i,mid);
		max1=Max;min1=Min;
		maxmin(mid+1,j);
		if(Max<max1){
			Max=max1;
		}
		if(Min>min1){
			Min=min1;
		}
	}
}
int main(){
	int high;
cin>>high;
for(int i=0;i<high;i++){
	cin>>a[i];
}
	 Max=a[0];
	 Min=a[0];
	maxmin(0,high-1);
	cout<<Max<<Min;
	return 0;
}
