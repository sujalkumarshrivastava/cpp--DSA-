//maximum subarray sum
#include<iostream>
#include<vector>
using namespace std;
int kdanesAlgorithm(vector<int>nums,int n){
    int prefix=0;
    int maxi=INT32_MIN;
    for(int i=0;i<n;i++){
        prefix+=nums[i];
        maxi=max(maxi,prefix);
        if(prefix<0){
            prefix=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cout<<"enter the number of elements of array: ";
    cin>>n;
    vector<int>nums(n);
    cout<<"elements are:";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int result=kdanesAlgorithm(nums,n);
    cout<<"maximum sub array sum is:"<<result;
    return 0;
}
