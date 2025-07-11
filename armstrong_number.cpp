//ARMSTRONG NUMBER
#include<iostream>
#include<cmath> 
using namespace std;

int countDigit(int num){
    int count=0;
    while(num){
        count++;
        num/=10;    
    }
    return count;     
}

bool armstrong(int num, int digit){
    int rem, ans = 0, original = num;
    while(num){
        rem = num % 10;
        num /= 10;
        ans += pow(rem, digit);
    }
    return ans == original;
}

int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    int digit = countDigit(n);
    if(armstrong(n, digit)){
        cout << n << " is an Armstrong number.";
    } else {
        cout << n << " is not an Armstrong number.";
    }
    return 0;
}