#include<stdio.h>
int odd_even(int n){
	int mask=(n&1);
	if(mask==0){
		return 1;
	}
	else{
		return -1;
	}
}
void swap(int &a,int &b){
	int t=a;
	a=b;
	b=t;
}
void array(int a[],int size){
	int f=a[0];
	int temp=0;
	for(int i=1;i<size;i++){
		if(odd_even(f)==1){
			if(odd_even(a[i])==1)
			temp=a[i];
			
		}
	}
	for(int i=0;i<size;i++){
		printf("%d  ",a[i]);
	}
}
int main(){
	printf("enter your array size\n");
	int size;
	int a[size];
	scanf("%d",&size);
	printf("enter your array elements\n");
	
	for(int i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	array(a,size);
	
	return 0;}
