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
void swap(int a,int b){
	int t;
	a=t;
	b=a;
	t=b;
}
int main(){
	int n=2,m=4;
	swap(n,m);
	printf("%d  %d",odd_even(2));
	return 0;
}
