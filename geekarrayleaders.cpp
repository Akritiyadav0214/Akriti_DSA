#include<iostream>
#include<vector>
using namespace std;


class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int>v;
        bool test=false;
       for(int i=0;i<arr.size();i++){
           for(int j=i;j<arr.size();j++){
               if(arr[i]>=arr[j]){
                   test=true;
               }
               else{
                 test=false;
                 break;
               }
           }
           if(test==true){
               v.push_back(arr[i]);
           }
       }
    // this code will cause time limit exceeded
    
       return v;
    }
};