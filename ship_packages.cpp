//ship packages
#include<iostream>
using namespace std;
int shipPackages(int n,int arr[],int k){
    int start=4,end=0,mid,ans;
    for(int i=0;i<n;i++){
        end+=arr[i];
    }
    //main code
    while(start<=end){
        mid=start+(end-start)/2;
        int day=1,weight=0;
        for(int i=0;i<n;i++){
            weight+=arr[i];
            if(arr[i]>mid){
                day++;
                weight=arr[i];
            }
        }
        //
        if(day<=k){
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
    int k=3,n=6;
    int arr[n]={3,2,2,4,1,4};
    int result=shipPackages(n,arr,k);
    cout<<"minimum weight capacity of ship to ship all parcel within k days is:"<<result;
    return 0;
}