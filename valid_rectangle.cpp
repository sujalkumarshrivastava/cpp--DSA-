#include<iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter the sides of the rectangle: ";
    cin >> a >> b >> c >> d;

    if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c)) {
        cout << "The sides form a rectangle." << endl;
        return 1;
    } else {
        cout << "The sides do not form a rectangle." << endl;
        return 0;
    }
}
