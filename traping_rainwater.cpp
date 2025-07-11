#include<iostream>
#include<vector>
using namespace std;
int trapRainWater(vector<int>height,int n){
    int maxleft=0,maxright=0,water=0,maxheight=height[0],index=0;
    //find maximum element in array
    for(int i=0;i<n;i++){
        if(height[i]>maxheight){
            maxheight=height[i];
            index=i;
        }
    }
    //find maxleft
    for(int i=0;i<index;i++){
        //maxleft=max(maxleft,height[i]);
        
        
        if(maxleft>height[i]){
            water+=maxleft-height[i];
        }
        else{
            maxleft=height[i];
        }
    }
    //find maxright
    for(int i=n-1;i>maxheight;i--){
        //maxright=max(maxright,height[i])
        if(maxright>height[i]){
            water+=maxright-height[i];
        }
        else{
            maxright=height[i];
        }
    }
    return water;
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
    int result=trapRainWater(nums,n);
    cout<<"amount of water that can be trapped is: "<<result;
    return 0;
}