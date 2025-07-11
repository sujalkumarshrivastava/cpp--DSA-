//search element
/*#include<iostream>
using namespace std;
int searchElement(int arr[],int n,int target){
    
    for(int i=0;i<n;i++){
      if(arr[i]==target)
        return i;
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the number of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int target;
    cout<<"enter the target element:";
    cin>>target;
    int result=searchElement(arr,n,target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in array." << endl;
    }
    return 0;
}*/
//reverse array
/*#include<iostream>
using namespace std;
int ans;
void reverseArray(int arr[],int n){
    for(int i=0;i<n;i++){
       int temp=arr[i];
       arr[i]=arr[n-i-1];
       arr[n-i-1]=temp;
    }
}
int main(){
    int n;
    cout<<"enter the number of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
   reverseArray(arr,n);
    cout<<"reverse of array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[n-i-1]<<" ";
    }
    return 0;
}*/
//second maximum
/*#include<iostream>
using namespace std;
int secondMaxNo(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i])
        max=arr[i];
        
    }
    int secondmax=INT32_MIN;
    for(int i=0;i<n;i++){
    if(arr[i]!=max){
        if(secondmax<arr[i]){
            secondmax=arr[i];
        }
    }
}
return secondmax;
}
int main(){
    int n;
    cout<<"enter the number of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int result=secondMaxNo(arr,n);
    cout<<"second maximum number in an  array is: "<<result;
    return 0; 
}*/
//rotate array by one
#include<iostream>
using namespace std;
void rotateByOne(int arr[],int n){
    int last=arr[n-1];
    for(int i=n-2;i>=0;i--)
    arr[i+1]=arr[i];

    arr[0]=last;
}
int main(){
    int n;
    cout<<"enter the number of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    cout<<"rotated array is:";
    rotateByOne(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  
    return 0;
}