#include <iostream>
#include <vector>
using namespace std;


int prefixSum(vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    return sum; 
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

    int result = prefixSum(arr);
    cout << "Total prefix sum is: " << result << endl;

    return 0;
}
