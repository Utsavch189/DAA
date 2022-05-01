#include<iostream>
using namespace std;
int sum(int a,int b){
	return (a*b)+1;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<sum(a,b);
	return 0;
}
