#include<iostream>
#include<vector>
#include<string>
using namespace std;
string defangingIpAddress(string str){
    int index=0;
    string ans; 
    while(index< str.size()){
        if(str[index]=='.'){
            ans=ans+"[.]";
        }
        else{
            ans+=str[index];
           
        }
        index++;
        
    }
    return ans;
   
}
int main() {
    string str = "192.168.1.1";
    cout << "Defanged IP: " << defangingIpAddress(str) << endl;
    return 0;
}

