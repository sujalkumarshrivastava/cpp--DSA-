#include<iostream>
using namespace std;
int main(){
    //determination of row and col.
    int row;
    cout<<"enter number of rows:";
    cin>>row;

    int col;
    cout<<"enter the number of column:";
    cin>>col;
    //arr1
    cout<<"elements of first matrix1 is:"<<endl;
    int arr1[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr1[i][j];
        }
    }
    //arr2
     cout<<"elements of first matrix2 is:"<<endl;
    int arr2[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr2[i][j];
        }
    }
    //sum
    int sum[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    //print sum matrix
    cout<<"sum of matrix is:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           cout<<sum[i][j]<<" ";
        }
        cout<<endl;
}
return 0;
}