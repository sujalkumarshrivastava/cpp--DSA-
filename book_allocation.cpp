 //book allocation
#include<iostream>
using namespace std;
int bookAllocation(int n,int arr[],int k){
    int start=90,end=0,mid,ans;
    for(int i=0;i<n;i++){
        end=end+arr[i];
    }
    while(start<=end){
        mid=start+(end-start)/2;
        int page=0,count=1;
        for(int i=0;i<n;i++){
            page=page+arr[i];
            if(page>mid){
                count++;
                page=arr[i];
            }
        }
        //**..imp..**
        if(count<=k){
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
    int n=4,k=2;
    int arr[n]={12,34,67,90};
    int result=bookAllocation(n,arr,k);
    cout<<"most number of books with minimum pages is:"<<result;
    return 0;
}