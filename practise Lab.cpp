#include<stdio.h>
int Max,Min;
//int size;
int a[32];

void maxmin(int low,int high){
	int mid=(low+high)/2;
	int max1,min1;
	if(low==high){
		Max=a[low];
		Min=a[low];
		
	}
	else if(low==high-1){
		if(a[low]<a[high]){
			Max=a[high];
			Min=a[low];
		}
		else{
			Max=a[low];
			Min=a[high];
		}
	}
	else{
		maxmin(low,mid);
		max1=Max,min1=Min;
		maxmin(mid+1,high);
		if(Max<max1){
			Max=max1;
		}
		if(Min>min1){
			Min=min1;
		}
	}
}

int main(){
	printf("enter your array size\n");
	int size;
	scanf("%d",&size);
	printf("enter your array elements\n");
	
	for(int i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	Max=a[0];
	Min=a[0];
	maxmin(0,size-1);
	printf("your max element is=%d and your min element is=%d",Max,Min);
	
	return 0;
}
