//three pair sum of the given eleemnts 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int brr[]= {1,2,3,4,5,6,7,8,9};
    int crr[]= {1,2,3,4,5,6,7,8,9};

    int ans;
    int target = 6;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            for(int k=0;k<9;k++){
                ans = arr[i]+brr[j]+crr[k];
                if(ans == target){
                cout<<"the eleements are "<<arr[i]<<" "<<brr[j]<<" "<<crr[k]<<endl;
                 }
            }
           
        }
    }
    return 0;
}