#include<iostream>
#include<vector>
#include<string>
using namespace std;
//function to check pangram
int checkPangram(string sentence){
    vector<int>alpha(26,0);
    int index;
    char a;
    for(int i=0;i<sentence.size();i++){
        index=sentence[i]-'a';
        alpha[index]=1;
    }
    for(int i=0;i<26;i++){
        if(alpha[i]==0){
            return 0;
        }
       
    }
    return 1;
}
int main(){
    vector<int>alpha(26,0);
    string sentence="abcdefghijklmnopqrstuvvwxyz";
    if(checkPangram(sentence)){
    cout<<"the sentence is pangram"<<endl;
    }
    else{
        cout<<"the sentence is not pangram"<<endl;
    }
    return 0;
}