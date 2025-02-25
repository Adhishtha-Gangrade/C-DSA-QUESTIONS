//intersection of two arrays 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,34,56,34,23,56,45};
    int sizea = 7;
    int brr[] = {1,34,54,34,56,32};
    int sizeb = 6;
    vector<int> ans;

    for(int i=0;i<sizea;i++){
        for(int j=0;j<sizeb;j++){
            if(arr[i]==brr[j]){
                bool alreadyadded = false;
            for(int k=0;k<ans.size();k++){
                if(arr[i]==arr[k]){
                    alreadyadded = true;
                    break;
                }

            }
            if(!alreadyadded){
                ans.push_back(arr[i]);


            }
            break;
            }
            
        }
    }
    cout<<"the intersection of the two arrays is "<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}