//1 time means 90 degree
#include<iostream>
using namespace std;
void rotateKTimes(int arr[100][100],int n){
      //transpose
      for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    //reverse columns
    int start=0,end=n-1;
    while(start<=end){
        for(int i=0;i<n;i++){
        swap(arr[i][start],arr[i][end]);
        start++,end--;
    }
}
}
int main(){
    int n=2;
    
    int arr[100][100];
    cout<<"enter the elements of matrix:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //k-time k liye
    int k;
    cout<<"enter the times of rotation:";
    cin>>k;
    k=k%4;
    while(k){
        rotateKTimes(arr,n);
        k--;
        //print rotated matrix
        cout<<"rotated array is:"<<endl;
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    }
    return 0;
}