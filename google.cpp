#include<iostream>
using namespace std;

int check(int n){
	int sum;
	if(n<1){
		return 0;
	}
	
	
	return n+check(n/2);
}

int main(){
cout<<check(5);
}
