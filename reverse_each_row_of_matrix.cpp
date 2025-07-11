#include<iostream>
using namespace std;
int main(){

//determination of row and col.
    int row;
    cout<<"enter number of rows:"<<endl;
    cin>>row;

    int col;
    cout<<"enter the number of column:"<<endl;
    cin>>col;

    //matrix
    cout<<"elements of first matrix is:"<<endl;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    //reverse each row
    for(int i=0;i<row;i++){
       int start=0,end=col-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
    //print reversed array
     cout<<"reversed array is:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<"\t ";
            
        }
        cout<<endl;
    }
    return 0;
}