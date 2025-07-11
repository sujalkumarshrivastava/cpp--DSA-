//cube of number
/*#include<iostream>
using namespace std;
int cube(int a){
    return a * a * a;
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cube(n);
    cout<<cube(n)<<"is the cube of number n"; 
    cout<<endl;
    return 0;
}*/
//reverse of a number 
/*#include<iostream>
using namespace std;
int reverse(int num){
    int remainder,ans=0;
    while(num!=0){
    remainder=num%10;
    num=num/10;
    ans=ans*10+remainder;
}
}

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    reverse(n);
    cout<<"reverse of the given number is: "<<reverse(n);
    
    return 0;    
}*/
//swap two numbers without using extra variable
/*#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the number's:";
    cin>>a>>b;
    cout<<endl;
    swap(a,b);
    cout<<"reverse is";
    cout<<a<<" "<<b ;
    return 0;
}*/
//print hello coder army n times
/*#include<iostream>
using namespace std;
char print(int n){
    for(int i=1;i<=n;i++){
cout<<"hello coder army "<<endl;
}
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    print(n);
    return 0;
}*/
// n!/(r-n)!*r!
#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
 
int ncr(int n,int r){
    int ans=fact(n)/(fact(n-r)*fact(r));
    return ans;
}

int main(){
int n,r;
cout<<"enter n: ";
cin>>n;
cout<<"enter r: ";
cin>>r;
cout<<ncr(n,r);
return 0;
}