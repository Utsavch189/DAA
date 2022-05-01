#include<iostream>
#include<cmath>
using namespace std;
 int power(int n){
 int i=0;
while(i<31){

	
	if (n==pow(2,i)){
	return 1;
}

i++;
}
return 0;	
 }
int main(){
int n;
cin>>n;
cout<<power(n);



	return 0;
}
