#include <iostream>
#include <vector>
using namespace std;

// Function to find pairs with the given difference
vector<pair<int, int>> pairDifference(vector<int> arr, int n, int difference) {
    vector<pair<int, int>> result;
    int start = 0, end = 1;

    while (end < n) { // Ensure bounds are maintained
        int diff = arr[end] - arr[start];

        if (diff == difference && start != end) {
            result.push_back({start + 1, end + 1}); // Store 1-based indices
            end++; // Move end forward to find other pairs
        } else if (diff < difference) {
            end++; // Increase the difference
        } else {
            start++; // Decrease the difference
        }

        if (start == end) {
            end++; // Ensure `end` is always ahead of `start`
        }
    }
    return result;
}

int main() {
    int n, difference;
    cout << "Enter number of elements in array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the required pair difference (target): ";
    cin >> difference;

    vector<pair<int, int>> results = pairDifference(arr, n, difference);
    if (!results.empty()) {
        cout << "Indices of required elements are:\n";
        for (auto &p : results) {
            cout << p.first << " " << p.second << endl;
        }
    } else {
        cout << "No such elements exist.\n";
    }

    return 0;
}
