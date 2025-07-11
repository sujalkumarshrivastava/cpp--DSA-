#include<iostream>
#include<vector>
using namespace std;
int waveForm(int arr[][100],int row,int col){
    //print in wave form
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cout<<arr[i][j];
        }
    }
}
int main(){
    int n,row,col;
    cout<<"enter number of rows";
    cin>>row;
    cout<<"enter number of  column:";
    cin>>col;    
//takingh a matrix
    int arr[100][100];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

//use function

    return 0;
}