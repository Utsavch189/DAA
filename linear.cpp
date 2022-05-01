#include<iostream>
using namespace std;
 
int linearsearch(int arr[],int n,int key) {
    for(int i=0;i<n;i++) {
        if(arr[i]==key){
        return i;
    }
    }
    return -1;
    }


int main()
 {
     int n,arr[n];
     cout<<"Enter the size of array::"<<endl;
     cin>>n;
     
     for(int i=0;i<n;i++){
         cout<<"Write array elements"<<endl;
         cin>>arr[i];
        }
       
    int key;
    cout<<"Enter the key element::"<<endl;
    cin>>key;
    
    cout<<linearsearch(arr,n,key)<<endl;
     
     return 0;
}
