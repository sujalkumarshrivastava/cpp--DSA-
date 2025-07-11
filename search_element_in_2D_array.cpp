#include <iostream>
#include <vector>
using namespace std;

int main() {
    int row, column;
    cout << "Enter the number of rows in array: ";
    cin >> row;
    cout << "Enter the number of columns in array: ";
    cin >> column;

    int arr[row][column];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> arr[i][j];
        }
    }

    int target = 7; 
    bool found = false;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (arr[i][j] == target) {
                cout << "Target is found at index: " << i << " " << j << endl;
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        cout << "Target is not present in the array." << endl;
    }

    return 0;
}