// sorting 0s and 1s 
#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,1,0,1,1,1,1,1,0};
    int n=10;
    int start =0;
    int end = n-1;
    while(start < end){
        while(arr[start]==0 && start<end){
            start++;

        }
        while(arr[end]== 1 && start<end){
            end--;
        }
        if(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    cout<<"the sorted array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}