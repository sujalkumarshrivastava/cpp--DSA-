#include <iostream>
#include <vector>
#include <string>
using namespace std;
int longestPalindrome(string s)
{
    vector<int> lower(26, 0), upper(26, 0);
    int index1, index2;
    for (int i = 0; i < s.size(); i++)
    {
        // small alphabets ka ascii value bade alphabets se jada hota hai
        if (s[i] >= 'a')
        {
            // index1=s[i]-'a';
            // index of lower array:->eg:{c-a=2},so index2=1

            lower[s[i] - 'a']++;
        }
        else
        {
            // index2=s[i]-'A';
            // index of upper array:->eg:{C-A=2},so index2=1
            upper[s[i] - 'A']++;
        }
    }
    int count = 0, odd;
    for (int i = 0; i < 26; i++)
    {
        // for lower count
        if (lower[i] % 2 == 0)
        {
            count += lower[i];
        }
        else
        {
            count += lower[i] - 1;
            odd = 1;
        }
        // for upper count
        if (upper[i] % 2 == 0)
        {
            count += upper[i];
        }
        else
        {
            count += upper[i] - 1;
            odd = 1;
        }
    }
    return count + odd;
}
int main()
{
    string s;
    cout << "enter the string: " << endl;
    cin >> s;
    cout << "the longest possible palindrome is of " << longestPalindrome(s) << " words";
    return 0;
}