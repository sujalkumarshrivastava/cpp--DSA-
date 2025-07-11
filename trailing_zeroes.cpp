//trailing zero in factorial

#include<iostream>
#include<cmath> 
using namespace std;

int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    } 
    return fact;
}

int countZeroes(int num){
    int count=0;
    int fact=factorial(num);
    while(fact%10==0){
       count++;
        fact=fact/10;
    }
    return count;
}
int main(){
    int num;
    cout<<"enter the number:";
    cin>>num;
    cout<<"number of zeroes are"<<countZeroes(num);
    return 0;
}
