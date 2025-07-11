//painter partation
#include<iostream>
using namespace std;
int painterPartation(int n,int arr[],int k){
    int start=30,end=0,mid,ans;
    for(int i=0;i<n;i++){
        end=end+arr[i];
    }
    //main line
    while(start<=end){
        mid=start+(end-start)/2;
        int wall=0,painter=1;
        for(int i=0;i<n;i++){
            wall+=arr[i];
            if(wall>mid){
                painter++;
                wall=arr[i];
            }
        }
        if(painter<=k){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    int n=5,k=3;
    int arr[n]={5,10,30,20,15};
    int result=painterPartation(n,arr,k);
    cout<<"minimum time to paint wall is: "<<result;
    return 0;
}