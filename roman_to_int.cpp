#include<iostream>
#include<string>
using namespace std;
int num(char c){
    if(c == 'I'){
        return 1;
    }
    else if (c == 'v'){
        return 5;
    }
     else if (c == 'x'){
        return 10;
    }
     else if (c == 'L'){
        return 50;
    }
     else if (c == 'c'){
        return 100;
    }
     else if (c == 'D'){
        return 500;
    }
     else{
        return 1000;
    }
    //better alternative is switch
    /*
    int num(char c){
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0; // Handle unexpected characters
    }
}
    */
}

int romanToInt(string s){
    int sum = 0 ,index = 0 ;
    while(index < s.size()-1){
        if(num(s[index]) < num(s[index + 1])){
            sum = sum - num(s[index]);
        }
        else{
            sum = sum + num(s[index]);
        }
        index++;
    }
    sum += num(s[s.size() - 1]);
    return sum;
}
int main(){
    string s = "cD";
    int result = romanToInt(s);
    cout<<"integer of given roman term is :"<<result<<endl;
    return 0; 
}
