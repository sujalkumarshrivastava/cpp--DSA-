//two sum
#include<iostream>
using namespace std;
int twosum(int n,int arr[],int target,int result[]){
    int start=0,end=n-1,ans;
    while(start<end){
        if(arr[start]+arr[end]==target){
         result[0]=start;
         result[1]=end;
         return 1;
        }
        else if(arr[start]+arr[end]>target){
            end--;
        }
     else{
        start++;
    }
}
return 0;
}

int main(){
int target,n;
cout<<"enter the number of elements in array:";
cin>>n;
int arr[n];
cout<<"enter elements:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"enter the target: ";
cin>>target;

int result[2]; // Array to store the indices
if (twosum(n, arr, target, result)) {
    cout << "Indices of required sum are: " << result[0] << " and " << result[1] << endl;
} else {
    cout << "No solution found." << endl;
}

return 0;
}