#include<iostream>
#include<vector>
class Solution {
public:
    int mirrorDistance(int n) {
        int digit=0;
        int x=n;
        int ans;
       while(n!=0){
      ans=n%10;
         n=n/10;
         digit=digit*10+ans;
       }
       return abs(x-digit);
    }
};