#include <iostream>
#include <string>
using namespace std;

// Clockwise rotation
void rotateClockwise(string &s) {
    char lastChar = s[s.size() - 1];
    int index = s.size() - 2;
    
    while (index >= 0) {
        s[index + 1] = s[index];
        index--;
    }
    s[0] = lastChar;
}

// Anticlockwise rotation 
void rotateAntiClockwise(string &s) {
    char firstChar = s[0];
    int index = 0;
    
    while (index < s.size() - 1) {
        s[index] = s[index + 1];
        index++;
    }
    s[s.size() - 1] = firstChar;
}

int main() {
    string s = "amazon";
    string s2 = "onamaz";

    rotateClockwise(s);
    rotateClockwise(s);
    
    if (s == s2) {
        cout << "yes" << endl;
    }
    

    rotateAntiClockwise(s);
    rotateAntiClockwise(s);
    
    if (s == s2) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}