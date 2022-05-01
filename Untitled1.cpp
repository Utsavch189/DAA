#include<iostream>
using namespace std;
int fun(int a[],int size){


	size+=1;
	return fun(a,size);
}
int main(){
	int a[4]={1,2,3,4};
	cout<<fun(a,4)<<endl;
	return 0;
}
