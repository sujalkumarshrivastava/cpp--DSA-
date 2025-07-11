//max difference between two elements
#include<iostream>
#include<vector>
using namespace std;
int maxDifference(vector<int>nums,int n){
    int maxdifference=INT16_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            maxdifference=max(maxdifference,nums[j]-nums[i]);
        }
    }
    return maxdifference;
}
int main(){
    int n;
    cout<<"enter the number of elements of array:";
    cin>>n;
    cout<<"elements are:";
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int result=maxDifference(nums,n);
    cout<<"the maximum difference is: ";
    cout<<result<<endl;
    return 0;
}