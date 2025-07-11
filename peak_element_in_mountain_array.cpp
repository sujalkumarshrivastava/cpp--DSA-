//peak element in mountain array
#include<iostream>
using namespace std;
int peakIndexInMountainArray(int arr[]){
    int start=0,end=7,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1] &&arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return mid;
}
int main(){
   int arr[]={2,4,6,8,10,8,5};
   int result=peakIndexInMountainArray(arr);
   cout<<"peak index is:"<<result;
   return 0;
}