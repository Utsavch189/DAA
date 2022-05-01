#include<stdio.h>
using namespace std;

int searchbinary(int a[],int i,int j,int item){
	int mid=(i+j)/2;
	if(i==j){
		if(item==a[i]){
			return i;
		}
		else{
			return -1;
		}
	}
	
	else if(item==a[mid]){
			return mid;
		}
		
	else{
		if(item<a[mid]){
			searchbinary(a,i,mid-1,item);
		}
		else{
			searchbinary(a,mid+1,j,item);
		}
	}	
}
int main(){
	int a[5]={1,2,3,4,5};
	printf("Your item's position is =>%d ",searchbinary(a,0,4,2));
	return 0;
}
