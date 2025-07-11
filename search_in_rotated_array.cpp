//****search in rotated array****
#include<iostream>
using namespace std;

int searchInRotatedArray(int n, int arr[], int target) {
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[start] <= arr[mid]) { 
            if (target >= arr[start] && target < arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } else { 
            if (target > arr[mid] && target <= arr[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1; // Element not found
}

int main() {
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter target: ";
    cin >> target;
    int result = searchInRotatedArray(n, arr, target);
    if (result != -1) {
        cout << "Index of target element is: " << result;
    } else {
        cout << "Target element not found.";
    }
    return 0;
}
