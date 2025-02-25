// find first repeating element 
#include<iostream>
using namespace std;
int firstRepeated(int* arr,int n){

    for(int i=0;i<n;i++){
       
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
       
                cout<<i+1;
                return 0;
            }
        }
    }
    cout<<"-1";
    return -1;
}


int main(){
    int n;
    int arr[] = {1,5,3,4,3,5,6};
    n = sizeof(arr)/sizeof(int);
    firstRepeated(arr,n);
    return 0;

}