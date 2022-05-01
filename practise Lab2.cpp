#include<stdio.h>
void maxmin(int a[],int size){
	int Max,Min;
	Max=a[0];
	Min=a[0];
	for(int i=1;i<size;i++){
		
			if(a[i]>Max){
				
				Max=a[i];
			}
			 if(a[i]<Min){
				
				Min=a[i];
			}
			
			
		
	}
		printf("your max element is=%d and your min element is=%d",Max,Min);
}
int main(){
	printf("enter your array size\n");
	int size;
	int a[size];
	scanf("%d",&size);
	printf("enter your array elements\n");
	
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	maxmin(a,size);
	return 0;}
