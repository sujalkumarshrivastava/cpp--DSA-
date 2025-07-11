/*#include<iostream>
using namespace std;
int main(){
    for(int row=1;row<=5;row++){
        for(int col=1;col<=row;col++){
           cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    for(int row=1;row<=5;row++){
        for(int col=1;col<=row;col++){
           cout<<col<<" ";
           
        }
        cout<<endl;
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    for(int row=1;row<=5;row++){
       
        for(int col=1;col<=row;col++){
           cout<<row<<" ";
               
        }
        cout<<endl;
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
   for(int row=1;row<=5;row++){
    for(int col=row;col>=1;col--){
        cout<<col<<" "; 
    }
        cout<<endl;
    }
    return 0;
}*/
//LETTERS:-
/*#include<iostream>
using namespace std;
int main(){
   
    for(int row=1;row<=5;row++){
        char alphabet='a'+(row-1);
        for(int col=1;col<=row;col++){
            cout<<alphabet<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    for(int row=1;row<=5;row++){
        for(int col=1;col<=5-(row-1);col++){
        
            cout<<"*"<<" ";

        }
        cout<<endl;
    }
}*/
 
/*#include<iostream>
using namespace std;
int main(){
   
   // for(int row=1;row<=5;row++){
     //   for(int col=1;col<=5-(row-1);col++){
        
        //    cout<<col<<" ";
          for(int row=5;row>=1;row--){
            for(int col=1;col<=row;col++){
                cout<<"*"<<" ";
            }
          
        
        cout<<endl;
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
    for(int row=1;row<=5;row++){
        for(int col=5;col>=5-(row-1);col--){
        
            cout<<col<<" ";

        }
        cout<<endl;
    }
    return 0;
}