// 2 sum problem of sorted array 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int target;
    cout<<"enter the target"<<endl;
    cin>>target;
    cout<<"enter the elements in the array"<<endl;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int start = 0;
    int end = n-1;
    while(start<end){
        if(arr[start]+arr[end]>target){
            end--;
        }
        else if(arr[start]+arr[end]<target){
            start++;
        }
        else{
            cout<<"elements are "<<arr[start]<<" "<<arr[end]<<endl;
            break;
        }

    }
    return 0;
}