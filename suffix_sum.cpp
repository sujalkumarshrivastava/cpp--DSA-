#include<iostream>
#include<vector>
using namespace std;
int suffixSum(vector<int>suff){
    int ans=0;
    int n=suff.size();
    for(int i=n;i>0;i--){
        ans+=suff[i];
    }
    return ans;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n); 
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = suffixSum(arr);
    cout << "Total suffix sum is: " << result << endl;

    return 0;
}
