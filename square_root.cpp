#include<iostream>
using namespace std;
int Sqrt(int n){
    int start=0,mid,ans,end=n;
    while(start<=end){
        mid=start+(end-start)/2;
        if(mid*mid==n){
         return mid;   
        }
        else if(mid*mid<n){

             start=mid+1;
             ans=mid;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number whose sqrt is to be found is:";
    cin>>n;
    int result=Sqrt(n);
    cout<<"result is:"<<result;
    return 0;
}