#include<iostream>
using namespace std;
void swap(int a[],int i){
	int t=a[i];
	a[i]=a[i+1];
	a[i+1]=t;
}
int main(){
	int a[5]={1,2,3,4,5};
  for(int i=0;i<5;i+=2){
  	if(i+1<5){
  		swap(a,i);
  	
	  }
  }
  for(int i=0;i<5;i++){
  	cout<<a[i]<<" ";
  }
	return 0;
}
