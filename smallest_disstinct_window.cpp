#include <iostream>
#include <string>
#include <vector>
using namespace std;
int slidingWindow(string str)
{   
    vector<int>count(256,0);
    int first = 0, second = 0;
    int length = str.size();
    int diff =0;
    //counting unique character
    if(count[str[first]] == 0){
        diff++;
        count[str[first]]++;
        first++;
    }
    for(int i = 0; i < 256; i++){
        count[i] = 0;
        first = 0;

    }
    //different exist
    while(diff & second < str.size()){
        if(count[str[second]] == 0){
            diff--;
            count[str[second]]++;
            second++;
        }
        length = min(length , second - first);
        //different does not exist
        while(diff != 1){
           length = min(length , second - first);
             count[str[second]]--;
             if(  count[str[first]] == 0){
                diff ++;
                first++;
             }
        }
        return length;
    }

}
int main(){
     string str="";
     cout<<"enter string: ";
     cin>>str;
     int result =slidingWindow(str);
     cout<<"smallest distinct window is :"<<result<<endl;
     return 0;
}