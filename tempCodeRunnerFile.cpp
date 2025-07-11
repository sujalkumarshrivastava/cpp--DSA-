#include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// string sortString(string sentence) {
//     vector<int> alpha(26, 0);
//     string ans = "";

//     // Count frequency of each character
//     for (char ch : sentence) {
//         if (isalpha(ch)) { 
//             alpha[ch - 'a']++;
//         }
//     }

//     // Append characters 
//     for (int i = 0; i < 26; i++) {
//         char c = i + 'a';
//         while (alpha[i] > 0) {
//             ans += c;
//             alpha[i]--;
//         }
//     }

//     return ans;
// }

// int main() {
//     string sentence = "dcba";
//     cout << sortString(sentence) << endl;  
    
//     return 0;
// }