#include<iostream>

using namespace std;
int main(){
    //character array
//    char str[100];
//     cout<<"enter char array: ";
//     cin.getline(str,100);
//     cout<<str;
//     cout<<endl;
//     return 0;
    //calculate length
    char st[] = "om kumar";
    int len = 0;
    for(int i=0;i<st[i]!='\0';i++){
        len++;
    }
    cout<<"length of string is: "<< len <<endl;
    return 0;
}