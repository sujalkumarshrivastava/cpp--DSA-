#include <iostream>
using namespace std;

bool prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}




int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}

int main(){
    int a,b;
    cout<<"enter the number"<<endl;
    cin>>a>>b;
    cout<<endl;
    /*prime(a);
    cout<<endl;
    fact(a);
    cout<<endl;
    prime(b);
    cout<<endl;
    fact(b);
    cout<<endl;
    prime(a-b);
    cout<<endl;
    fact(a-b);
    cout<<endl;
    if (prime(a)) {
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }
    if (prime(b)) {
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }
    if (prime(a-b)) {
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }*/
   //a is prime or not
  cout<<prime(a)<<endl;
   //a ka factorial
   cout<<fact(a)<<endl;
   //a is prime or not
   cout<<prime(b)<<endl;
    //b ka factorial
   cout<<fact(b)<<endl;
   //a is prime or not
   cout<<prime(b-a)<<endl;
    //(b-a) ka factorial
   cout<<fact(b-a)<<endl;

    return 0;
}

//pass by value--------from copy
//pass by referance----from copy