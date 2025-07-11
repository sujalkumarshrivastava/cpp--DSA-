//convert a to A
#include<iostream>
using namespace std;
char aToA(char input){
    return input-32;
}
int main(){
    char input;
    cout<<"enter the alphabet from a to z:";
    cin>>input;
    cout<<"output is: "<<aToA(input);
    return 0;
}