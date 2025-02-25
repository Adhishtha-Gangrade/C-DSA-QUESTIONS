// find the first occerence of an element 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int firstOccurence(vector<int> arr,int target){
    int s =0;
    int e = arr.size()-1;
 
    int ans =-1;
    while(s<=e){
        int m = s+(e-s)/2;
        if(arr[m]==target){
            ans = m;
            e = m-1;
        }
        else if(arr[m]<target){
            s = m+1;
        }
        else{
            e= m-1;
        }
    }
    
    return ans;
}
int main(){
    cout<<"enter the no of elements "<<endl;
    int n;
    cin>>n;
    cout<<"enter the elements in vector"<<endl;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);

    }
    int target = 4;

    int first = firstOccurence(arr,target);
    cout<<"ans is "<<first<<endl;
    return 0;

}
