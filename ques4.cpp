//union of two arrays
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    vector<int> brr(m);
    cout<<"enter the numbers in array 1"<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the elements in array 2"<<endl;
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }

    vector<int> ans;
    for(int i=0;i<n;i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<m;i++){
        ans.push_back(brr[i]);
    }

    cout<<"the union of two array is "<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;



}