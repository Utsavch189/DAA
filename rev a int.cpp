#include<iostream>
#include<cmath>
int num;int res=0;
using namespace std;
class reverse{
	
public:
	
int rev(int n){
	int mod;
	
	while(n!=0){
		mod=n%10;
		res=res*10+mod;
		n/=10;
	}

}

};
class answer: public reverse{
	public:
		rev( );
		int ans(){
		if(res>=pow(-2,31) && res<=(pow(2,31)-1)){
	
	return res;
}
else{
	return 0;
}
}
};

int main(){
	answer r;
	cin>>num;
	r.rev(num);
	cout<<r.ans();
	
	return 0;
}
