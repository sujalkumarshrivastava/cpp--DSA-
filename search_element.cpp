#include<iostream>
using namespace std;
bool binarySearchIn2D(int arr[100][100],int n,int m,int x){
    int start=0,end=(m*n)-1;
    while(start<=end){
        int mid=(end+start)/2;
        int row_index=mid/m;
        int col_index=mid%m;
        if(arr[row_index][col_index]==x){
        return 1;
        }else if(arr[row_index][col_index]<x){
            start=mid+1;
    }
    else{
        end=mid-1;
    }
    
    }
    return 0;
}
int main(){
    //row,col,target
    int n=4,m=5,x=52;
    //enter matrix
    cout<<"enter matrix:"<<endl;
    
    int arr[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //function call
    bool result= binarySearchIn2D(arr,n,m,x);
    if(result==1){
        cout<<"target is found"<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }
    return 0;
}