//***K-th missing positive integer*/
#include<iostream>
using namespace std;
int kthMissingInteger(int n,int arr[],int k){
    int start=0,end=n-1,mid,ans=n;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]-mid-1>=k){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans+k;
}
int main(){
    int n;
    cout<<"enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"elements are: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cout<<"enter position of element needed:";
    cin>>k;
    int result=kthMissingInteger(n,arr,k);
    cout<<"element in kth position is:"<<result;
    return 0;
}