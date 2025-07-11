#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
int minChar(string s)
{
    // [1] :find reverse string
    int size = s.size();
    string rev = s;
    reverse(rev.begin(),rev.end());
    s +='$';
    s += rev;
    //lps
    int n = s.size();//joint size
    vector<int> lps(s.size(),0);
    int pre = 0, suf = 1;
    while(suf <= n){
        if(s[pre] == s[suf] ){
            lps[suf] = pre + 1;
            pre ++;
            suf ++;
        }
        else{
            if(pre == 0){
                suf++;
            }
            else{
                pre =lps[ pre -1];
            }
        }
    }
    return size - lps[n-1];
}
int main()
{
    string s = "";
    cout << "enter the string: " << endl;
    cin >> s;
    int result = minChar(s);
    cout << "minm charecter must be added to make the string palindrome is :" << result << endl;
    return 0;
}