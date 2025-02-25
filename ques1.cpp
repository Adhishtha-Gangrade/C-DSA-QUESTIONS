// count no of zeros and ones in a given string
// Created date: 2021-07-01
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,0,1,1,0};
    int countzero = 0;
    int countone = 0;
    for(int i=0;i<5;i++){
        if(arr[i]==0){
            countzero++;
        

        }
        else{
            countone++;
        }
    }
    cout<<"no of zeros is "<<countzero<<endl;
    cout<<"no of ones is "<<countone<<endl;
    return 0;

}