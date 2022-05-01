#include<stdio.h>
int max=99999;
int secondsmall(int a[],int n)
{
	int s,f;
	if(n<2)
	{
		return 0;
	}
	f=s=max;
	for(int i=0;i<n;i++)
	{
		if(a[i]<f)
		{
			s=f;
			f=a[i];
		}
		else if(a[i]<s && a[i]!=f)
		{
			s=a[i];
		}
	}
	if(s==max){
		return 0;
	}
	return s;
}
int main(){
	int n;	int a[n];

	printf("enter the array size\n");
	scanf("%d",&n);
		printf("enter the array items\n");
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}

	
	printf("second smallest item is=%d",secondsmall(a,n));
}
