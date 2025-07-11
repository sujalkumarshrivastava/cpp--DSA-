#include <iostream>
#include <vector>
using namespace std;
string sortingvowel(string s)
{
    vector<string> lower(26, 0);
    vector<string> upper(26, 0);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            int index1=s[i] - 'a';
            lower[index1]++; 
            s[i] = '#';         
        } 
}
}