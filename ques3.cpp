// find unique element in an array 
#include<iostream>
#include<vector>
using namespace std;
int findunique(vector<int> arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans= ans^arr[i];

    }
    return ans;
}
int main(){
    int n;
    vector<int> arr(n);
    cout<<"enter the unique element "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int unique = findunique(arr);

    cout<<"unique element is "<<unique<<endl;
    return 0;

}
