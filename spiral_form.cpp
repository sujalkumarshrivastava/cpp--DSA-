#include <iostream>
using namespace std;

void spiral(int arr[5][5], int n) {
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (left <= right && top <= bottom) {
        // Top row
        for (int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;

        // Right column
        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;

        // Bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        // Left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    int n = 5;
    int arr[5][5];
    cout << "Enter elements of the matrix:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Spiral form of the matrix is:" << endl;
    spiral(arr, n);

    return 0;
}