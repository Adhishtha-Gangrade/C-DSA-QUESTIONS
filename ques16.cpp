// dutch national flag algorithm to move all negative integers to left side of array

#include<iostream>
using namespace std;
void dutch(int* arr,int size){
    int l=0,h=size-1;

    while(l<h){
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
    }
}
int main(){
    int arr[] = {-1,2,3,-2,3};
    int size = sizeof(arr)/sizeof(int);
    dutch(arr,size);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}