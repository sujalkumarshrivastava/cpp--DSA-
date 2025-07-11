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
    //first diagonal sum
    int sum1=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                sum1+=arr[i][j];
            }
        }
    }
    cout<<"sum of first diagonal is:"<<sum1<<endl;
   

    //second diagonal
    int sum2=0;
    for(int i=0;i<row;i++){
        sum2+=arr[i][col-i-1];
        /*for(int j=col-1;j>0;j--){
            sum2+=arr[i][j];
        }*/
    }
    cout<<"sum of second diagonal is:"<<sum2;
    return 0;
}