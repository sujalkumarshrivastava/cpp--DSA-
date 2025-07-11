#include <iostream>
#include <vector>
using namespace std;

bool subarrayOfEqualSum(vector<int> nums, int n) {
    int totalSum = 0;

    // Calculate total sum of the array
    for (int i = 0; i < n; i++) {
        totalSum += nums[i];
    }

    // Check if we can split into two subarrays with equal sum
    int prefixSum = 0;
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        int suffixSum = totalSum - prefixSum;

        if (prefixSum == suffixSum) {
            // Print the subarrays
            cout << "Subarray 1: [";
            for (int j = 0; j <= i; j++) {
                cout << nums[j];
                if (j < i) cout << ", ";
            }
            cout << "]" << endl;

            cout << "Subarray 2: [";
            for (int j = i + 1; j < n; j++) {
                cout << nums[j];
                if (j < n - 1) cout << ", ";
            }
            cout << "]" << endl;

            return true;
        }
    }

    return false;
}

int main() {
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    bool result = subarrayOfEqualSum(nums, n);
    if (result) {
        cout << "The array can be divided into two subarrays with equal sum." << endl;
    } else {
        cout << "The array cannot be divided into two subarrays with equal sum." << endl;
    }

    return 0;
}
/*#include <iostream>
#include <vector>
using namespace std;

bool subarrayOfEqualSum(const vector<int>& nums) {
    int totalSum = 0;
    int n = nums.size();

    // Calculate the total sum of the array
    for (int num : nums) {
        totalSum += num;
    }

    // Check for split point
    int prefixSum = 0;
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        int suffixSum = totalSum - prefixSum;

        if (prefixSum == suffixSum) {
            // Create subarrays using vector slicing
            vector<int> subarray1(nums.begin(), nums.begin() + i + 1);
            vector<int> subarray2(nums.begin() + i + 1, nums.end());

            // Print the subarrays
            cout << "Subarray 1: ";
            for (int x : subarray1) {
                cout << x << " ";
            }
            cout << endl;

            cout << "Subarray 2: ";
            for (int x : subarray2) {
                cout << x << " ";
            }
            cout << endl;

            return true;
        }
    }

    return false;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if (subarrayOfEqualSum(nums)) {
        cout << "The array can be divided into two subarrays with equal sum." << endl;
    } else {
        cout << "The array cannot be divided into two subarrays with equal sum." << endl;
    }

    return 0;
}
*/