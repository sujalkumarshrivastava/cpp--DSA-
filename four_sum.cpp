#include<iostream>
#include<vector>
using namespace std;
bool fourSum(vector<int>nums,int n,int target){
    for(int j=0;j<n-3;j++){
        for(int i=0;i<n-2;i++){
            int find=target-nums[i];
            int start=nums[i+1],end=nums[n-1];
            while(start<end){
                if(start+end==target){
                    return 1;
                }
                else if(start+end>target){
                    end--;
                }
                else{
                    start++;
                }
            }
          return 0;
        }
    }
    }
    int main(){
        int n;
        cout<<"enter the number of elements in array:";
        cin>>n;
        vector<int>nums(n);
        cout<<"elements are:";
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int target;
        cout<<"enter the target to be find:";
        cin>>target;
        int result=fourSum(nums,n,target);
        if(result==1){
            cout<<"sum is found.";
        }
        else{
            cout<<"sum is not found.";
        }
        return 0;
    }