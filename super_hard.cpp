//inverse pyrimid
/*#include<iostream>
using namespace std;

int main() {
    for (int row = 5; row >= 1; row--) {
        for (int col = 5 - row; col >= 1; col--) {
            cout << " ";
        }
        for (int col = 2 * row - 1; col >= 1; col--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}*/


//square with diamond space inside


/*
#include<iostream>
using namespace std;

int main() {
    // Decreasing stars pattern
    for (int row = 4; row >= 1; row--) {
        for (int col = row; col >= 1; col--) {
            cout << "*";
        }
        for (int col = 8 - (2 * row); col >= 1; col--) {
            cout << " ";
        }
        for (int col = row; col >= 1; col--) {
            cout << "*";
        }
        cout << endl;       
    }
    
    // Increasing stars pattern
    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }
        for (int col = 8 - (2 * row); col >= 1; col--) {
            cout << " ";
        }
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }
        cout << endl;       
    }
    
    return 0;
}
    */
   //butterfly
/*#include<iostream>
using namespace std;
int main(){
    //deacreasing pattern
    for(int row=1;row<=4;row++){
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
         for(int col=8- (2*row);col>=1;col--){
            cout<<" ";
            }
            for(int col=1;col<=row;col++){
                cout<<"*";
            }
        cout<<endl;
    }
   // Increasing pattern
   for(int row = 3; row >= 1; row--) {
    for(int col = 1; col <= row; col++) {
        cout << "*";
    }
    for(int col = 8 - (2 * row); col >= 1; col--) {
        cout << " ";
    }
    for(int col = 1; col <= row; col++) {
        cout << "*";
    }
    cout << endl;
}

return 0;
}
*/
//diamond star
#include<iostream>
using namespace std;
int main(){
    //increasing
    for(int row=1;row<=4;row++){
        for(int col=4-row;col>=1;col--){
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row=4;row>=1;row--){
        for(int col=4-row;col>=1;col--){
            cout<<" ";
        }
        for(int col=row;col>=1;col--){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}