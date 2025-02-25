// find duplicate number 
#include<iostream>
#include<algorithm>
using namespace std;
int duplicate(int* arr,int n){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
        }
    }
    return -1;
    
}
int main(){
    int n;
    cout<<"enter the elements in the array"<<endl;
    cin>>n;
    cout<<"enter the element in array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int duplicate_no = duplicate(arr,n);
    cout<<duplicate_no<<endl;
    return 0;

    

}