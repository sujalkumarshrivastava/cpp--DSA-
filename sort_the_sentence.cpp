#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> ans(10);
    string s;
    
    cout << "Enter the string: ";
    getline(cin, s); 
    
    string temp;
    int index = 0;

    while (index < s.size()) {
        if (s[index] == ' ') {  
            if (!temp.empty()) {
                int pos = temp.back() - '0';
                temp.pop_back(); 
                if (pos >= 0 && pos < ans.size()) {
                    ans[pos] = temp;
                }
                temp.clear();
            }
        } else {
            temp += s[index];
        }
        index++;
    }

    
    for (int i = 0; i < ans.size(); i++) {
        if (!ans[i].empty()) {
            cout << "ans[" << i << "]: " << ans[i] << endl;
        }
    }

    return 0;
}