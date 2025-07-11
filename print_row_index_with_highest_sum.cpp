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
    //matrix
    cout<<"elements of first matrix is:"<<endl;
    int arr1[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr1[i][j];
        }
    }
    //sum of elements of row
    int sum=INT16_MIN,index=-1;
    for(int i=0;i<row;i++){
        int total=0;
        for(int j=0;j<col;j++){
            total+=arr1[i][j];
            if(sum<total){
                sum=total;
                index=i;
            }
        }
    }
    cout<<"row with maximum sum is:"<<index;
    
    return 0;
}