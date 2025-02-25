// sort colors based on counting method 
#include<iostream>
#include<vector>
using namespace std;
void sortcolours(vector<int>& arr,int n){
    int l=0,m=0,h=arr.size()-1;
    while(m<=h){
        if(arr[m]==0){
            swap(arr[l],arr[m]);
            l++;
            m++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
    }
}
void sortcolors(vector<int>& arr,int n){
    int zeros,ones,twos;
    zeros=ones=twos=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zeros++;
        }
        else if(arr[i]==1){
            ones++;
        }
        else{
            twos++;
        }
    }
    int i=0;
    while(zeros--){
        arr[i]=0;
        i++;
    }
    while(ones--){
        arr[i]= 1;
        i++;
    }
    while(twos--){
        arr[i]=2;
        i++;
    }
}
int main(){
    int n;
    cout<<"enter the n elements "<<endl;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortcolors(arr,n);
    cout<<"sorting array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    sortcolours(arr,n);

    cout<<"sorting array by the approach of in place sorting is  "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}