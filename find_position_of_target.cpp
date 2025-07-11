//find the position of target element in array
#include<iostream>
using namespace std;
int FindPosition(int n,int arr[],int target){
    int start=0,end=n-1,mid,ans;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
        }
        else if(arr[mid]<target){
            start=mid+1;

        }
        else{
            ans=mid;
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"elements are:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target element:";
    cin>>target;
    int result=FindPosition(n,arr,target);
    cout<<"the position of element is: "<<result;
    return 0;
}