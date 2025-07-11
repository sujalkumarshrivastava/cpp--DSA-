#include<iostream>
#include<vector>
using namespace std;
//void transpose(int arr[100][100],int n){
void transpose(vector<vector<int>>& arr, int n){
//transpose
int row=n,col=n;
for(int i=0;i<row;i++){
    for(int j=i+1;j<col;j++){
        swap(arr[i][j],arr[j][i]);
    }
}
}
int main(){
    int n=3;
    //enter matrix
    cout<<"enter matrix:";
    // int arr[100][100];
    vector<vector<int>> arr(n, vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //print matrix before transpose
    cout<<"matrix before transpose"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //function call to transpose the matrix
    transpose(arr,n);
    //print matrix after transpose  
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"matrix after transpose"<<endl;
    return 0;
}