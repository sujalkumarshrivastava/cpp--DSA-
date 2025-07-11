//first and last position of element in array

#include <iostream>
using namespace std;

int First(int n, int arr[], int target) {
    int start = 0, end = n - 1, mid, first = -1;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            first = mid;
            end = mid - 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return first;
}

int Last(int n, int arr[], int target) {
    int start = 0, end = n - 1, mid, last = -1;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            last = mid;
            start = mid + 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return last;
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

    int result1 = First(n, arr, target);
    int result2 = Last(n, arr, target);
    if (result1 != -1 && result2 != -1) {
        cout << "First occurrence at index: " << result1 << "\n";
        cout << "Last occurrence at index: " << result2 << "\n";
    } else {
        cout << "Target not found\n";
    }
    return 0;
}
