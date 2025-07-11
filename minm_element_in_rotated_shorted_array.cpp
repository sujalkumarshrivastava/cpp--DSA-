// Find Minimum element in Rotated Sorted Array
#include<iostream>
using namespace std;
int minInRotatedArray(int n,int arr[]){
    int start=0,mid,end=n-1,ans;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else if(arr[mid]<arr[0]){
            ans=arr[mid];
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"elements are:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=minInRotatedArray(n,arr);
    cout<<"minimum element in array is:"<<result;
    return 0;
}