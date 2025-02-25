// maximum and minimum in the array
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,34,53,32,12};
    int max = INT8_MIN;
    int min = INT8_MAX;
    for(int i = 0;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"maximum number is "<<max<<endl;
    cout<<"minimum number is "<<min<<endl;
    return 0;
    
}