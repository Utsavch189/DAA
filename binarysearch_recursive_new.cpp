#include<iostream>
using namespace std;

int binarySearch(int a[],int low,int high,int item){
	
	int mid=(low+high)/2;
	if(low==high){
		if(item==a[low]){
			return low;
		}
		
	}
	else if(item==a[mid]){
		return mid;
	}
	else{
		if(item<a[mid]){
			high=mid-1;
			return binarySearch( a, low,high, item);
		}
		else{
			low=(mid+1);
			return binarySearch( a,low ,high, item);
		}
	}
	return -1;
	
}
int main(){
	int a[4]={1,2,3,4};
	cout<<binarySearch(a,0,3,2);
	return 0;
}
