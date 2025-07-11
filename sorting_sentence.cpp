#include <iostream>
#include <vector>
using namespace std;
string sortingSentence(string s)
{
    vector<string> ans(10);
    string temp;
    int count = 0, index = 0;
    while (index < s.size())
    {
        if (s[index] == ' ')
        {
            int position = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[position] = temp;
            temp.clear();
            count++;
        }
        else
        {
            temp += s[index];
            
        }
        index++;
    }
    int position = temp[temp.size() - 1] - '0';
    temp.pop_back();
    ans[position] = temp;
    temp.clear();
    count++;
    for (int i = 1; i <= count; i++)
    {
        temp += ans[i];
        temp += ' ';
    }
    temp.pop_back();

    return temp;
}
int main(){
    string s="is2 sentence4 this1 a3";
    cout<<"sorted sentence is:"<<endl<<sortingSentence(s);
    return 0;
}