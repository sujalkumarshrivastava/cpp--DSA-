// #include<iostream>
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
#include<iostream>
#include<string>
using namespace std;
int main() {
   
    string s="yfl";
    for(int i=0;i<s.size()-1;i++){
        for(int j=i+1;j<s.size();j++){
        if(s[i]>s[j]){
            swap(s[i],s[j]);
        }
    }
    }
    
    cout<<"sorted arrray is:";
    cout<<s<<endl;
    
    return 0;
}