//find a pair that upon addition gives sum equala to target 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int target = 9;
    int ans;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            ans = arr[i]+arr[j];
            if(ans==target){
                cout<<"the pairs elememnts are "<<arr[i]<<"ans"<<arr[j]<<endl;
                break;
            }
        }
    }
    return 0;
    
}