//segregate 0 and 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*void segregate(vector<int>& vec){
sort(vec.begin(),vec.end());
*/
/*void segregate(vector<int>&vec){

int count0=0,count1=0,n=vec.size();
for(int i=0;i<n;i++){
    if(vec[i]==0){
        count0++;
    }
    else{
        count1++;
    }
}
for(int i=0;i<count0;i++){
    vec[i]=0;
}
for(int i=count0;i<n;i++){
    vec[i]=1;
}

}

int main(){
    int n;
    cout<<"enter the number of elements in array: ";
    cin>>n;
    vector<int>seg(n);
    cout<<"enter the sequence of 0 and 1 to be segregated: ";
    for(int i=0;i<n;i++){
        cin>>seg[i];
    } 
    segregate(seg);
    cout<<"the segregated sequence is:";
    for(int i=0;i<n;i++){
        cout<<seg[i]<<" ";
    }
    cout<<endl;
    return 0;
}*/
//two pointer
int main(){
    int n;
    cout<<"enter the number of elements of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1;
    while(start<=end){
    if(arr[start]==0){
        start++;
    }
    else if(arr[end]==0){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    else{
        end--;
    }
}
cout<<"the segreted array is:";
for(int i=0;i<n;i++){
    cout<<arr[i];
}
return 0;
}