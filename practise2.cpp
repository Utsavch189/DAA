#include<iostream>
using namespace std;

int searchbinary(int a[],int i,int j,int item){
int mid=(i+j)/2;	
while(i<=j){
	
	if(item==a[mid]){
		return mid;
	}
	else{
			if(item<a[mid]){
		return	searchbinary(a,i,mid-1,item);
		}
		else{
		return 	searchbinary(a,mid+1,j,item);
		}
	}
	}
	return -1;
}	

int main(){
	int a[5]={1,2,3,4,5};
	cout<<searchbinary(a,0,4,5);
	return 0;
}
