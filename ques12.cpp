// printing row wise sum 
// printing max and min of element 
#include<iostream>
using namespace std;
int maxelement(int arr[][3],int rows , int col){
    int max = INT8_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    return max;
}
void printRowWiseSum(int arr[][3],int rows,int col){
    //row sum 
    for(int i=0;i<rows ;i++){
        int sum =0;

        for(int j=0;j<col;j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
}
int main(){
    int arr[3][3];
    int rows = 3;
    int col = 3;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];

        }
    }
    printRowWiseSum(arr,rows,col);
    int max = maxelement(arr,rows,col);
    cout<<"maximum element is "<<max<<endl;
    return 0;

}