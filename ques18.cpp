// missing eleements from an array with duplicates 
#include<iostream>
#include<algorithm>
using namespace std;
void findMissing2(int* arr,int n){
    int i=0;
    while(i<n){
        int index = arr[i] -1;
        if(arr[i] != arr[index]){
            swap(arr[i],arr[index]);
        }
        else{
            ++i;
        }
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int index=0;index<n;index++){
        if(index+1 != arr[index]){
            cout<<index+1;
            break;
        }
    }
}
void findMissing(int* arr,int n){
    for(int i=0;i<n;i++){
        int index = abs(arr[i]);
        if(arr[index-1]>0){
            arr[index-1] *= -1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int n;
    int arr[]={1,3,4,3,5};
    n = sizeof(arr)/sizeof(int);
    // findMissing(arr,n);
    findMissing2(arr,n);
    return 0;
}