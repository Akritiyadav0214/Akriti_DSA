#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char,int>feq;
       
        for(char ch:magazine){
            feq[ch]++;
        }
        for(char ch:ransomNote){
             if(feq[ch]==0){
                return false;
             }
             feq[ch]--;
        }
        return true;
            
        
    }
};