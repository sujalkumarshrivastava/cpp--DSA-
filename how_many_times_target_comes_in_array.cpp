//find how many times target comes in array
#include<iostream>
using namespace std;

int OccurrenceOfTarget(int n, int arr[], int target) {
    int start = 0, end = n - 1, mid, count = 0;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            count++;
            // Check for target in the left half
            int left = mid - 1;
            while (left >= 0 && arr[left] == target) {
                count++;
                left--;
            }
            // Check for target in the right half
            int right = mid + 1;
            while (right < n && arr[right] == target) {
                count++;
                right++;
            }
            return count;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return count;
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Elements are: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target element: ";
    cin >> target;
    int result = OccurrenceOfTarget(n, arr, target);
    cout << "Occurrence is " << result << " times" << endl;
    return 0;
}
