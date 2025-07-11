//aggressive cows:--{ans=max of min distance}
#include<iostream>
using namespace std;
int aggressiveCows(int n,int arr[],int k){//k= no. of cows
    int start=1,end=arr[n-1]-arr[0],ans,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        int count=1,position=arr[0];
        for(int i=1;i<n;i++){
    if(position+mid<=arr[i]){
        count++;
        position=arr[i];
        }
        }
        if(count<k){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    int n=5,k=3;
    int arr[n]={1,2,5,7,10};
    int result=aggressiveCows(n,arr,k);
    cout<<"max. of minimum distance is: "<<result;
    return 0;
}