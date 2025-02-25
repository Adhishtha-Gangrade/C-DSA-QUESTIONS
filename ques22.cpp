// binary search in an array 
#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[] = {1,3,5,6,7,8,12,23,56,67};
    n = sizeof(arr)/sizeof(int);
    int start =0;
    int end = n-1;
    int target = 23;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]== target){
            cout<<"found element "<<mid<<endl;
            return 0;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    cout<<"not found"<<endl;
    return 0;
}