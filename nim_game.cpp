#include<iostream>
using namespace std;
bool canWinNim(int n){
    if(n%4==0)
        return 0;
    
    else
        return 1;
    
}
int main(){
    int n;
    cout<<"enter the number of stones";
    cin>>n;
    cout<<canWinNim(n);
    return 0;
}