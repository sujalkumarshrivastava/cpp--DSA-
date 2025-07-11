//finding target using binary search
#include <iostream>
using namespace std;

int binarySearch(int n, int arr[], int target) {
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            start = mid + 1; 
        } else {
            end = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target: ";
    cin >> target;

    int result = binarySearch(n, arr, target);
    if (result != -1) {
        cout << "The index of found target is: " << result << endl;
    } else {
        cout << "Target not found." << endl;
    }
    return 0;
}
