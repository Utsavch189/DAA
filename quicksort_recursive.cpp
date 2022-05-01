#include<stdio.h>






int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++; 
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
            
        }
    }
    
    int temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return (i + 1);
}

void quickSort(int arr[],int low,int high)
{
    if (low < high)
    {
      
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high); 
    }
}

int main(){
	int a[5]={3,4,5,1,2};
	quickSort(a,0,4);printf("Your sorted array is--\n");
	for(int i=0;i<5;i++){
	printf("%d  ",a[i]);
	}
	return 0;
}
