 #include<iostream>
 #include<string>
 #include<algorithm>
 using namespace std;
 int main(){
    //taking input
    // char s[10];
    // cin>>s;
    // cout<<s;
    
    //taking input
    // string sa;
    // getline(cin,sa);
    // cout<<sa;
    //string size
    string s="rohit";
    cout<<s.size()<<endl;
    //joining two string
    string s1="rohit", s2="negi";
    string s3=s1+s2;
    cout<<s3<<endl;
    //pushback and popback
    char p='!';
    s.push_back(p);
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    //escape tag
    string sa="rohit is a\"good\"boy";
    cout<<sa;

 }