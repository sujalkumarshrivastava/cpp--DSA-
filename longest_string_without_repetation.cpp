#include<iostream>
#include<string>
#include<vector>
using namespace std;
 int longestSubstring(string s){
    vector<int>alpha(26,0);
    int maxi = INT16_MAX;
     int ans ;
    int length = 1 , end = s.size();
    for(int i = 0 ; i< end ; i++){
        alpha[i]++;
        length ++;
        if(alpha[i] > 1){
            length = 1;
        }
        ans = min(maxi , length);
    }
    return ans ;
 }