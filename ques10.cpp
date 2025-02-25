// two sum problem using map 
#include<iostream>
#include<map>
#include<vector>
using namespace std;

pair<int,int> Twosum(vector<int>& arr,int target){
    int n  = arr.size();
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int remaining = target - arr[i];
        if(mp.find(remaining)!=mp.end()){
            return {mp[remaining], i};
        }
        mp[arr[i]] = i;
    }
    return {-1,-1};
}
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int target;
    cout<<"enter the target of the sum "<<endl;
    cin>>target;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"the two sum of the problem is "<<endl;
    pair<int,int> twosum = Twosum(arr,target);
    if(twosum.first!=-1){
        cout<<"the sum is "<<twosum.first<<" "<<twosum.second<<endl;

    }
    else{
        cout<<"no pairs is found"<<endl;
        
    }
    return 0;
}