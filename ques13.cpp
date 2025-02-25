// transpose a matrix 
#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    cout<<"enter the eleemnts in the array"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"transpose of the matrix is "<<endl;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i];
        }
        cout<<endl;
    }
    return 0;
}
