// 2 sum problem 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target;
    cout<<"enter the tqarget "<<endl;
    cin>>target;
    cout<<"enter the elements in array"<<endl;
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the array"<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"the eleements are"<<arr[i]<<" "<<arr[j]<<endl;
                cout<<"index of the numbers is "<<i<<" "<<j<<endl;
            }
        }
    }
    return 0;
    
}