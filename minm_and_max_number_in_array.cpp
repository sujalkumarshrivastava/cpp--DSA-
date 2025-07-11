//find minimum and max number in array
#include<iostream>
using namespace std;
int minimumNo(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(min > arr[i])
            min = arr[i];
    }
    return min;
}
int maxNo(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
 
int main(){
    int n;
    cout<<"enter the no. of element in array:";
    cin>>n;
    int arr[n];
    cout<<"enter elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"minimum number in array is: "<<minimumNo(arr,n)<<endl;
    cout<<"maximum number in array is: "<<maxNo(arr,n)<<endl;
    return 0;
}