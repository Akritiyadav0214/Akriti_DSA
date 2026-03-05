#include<iostream>
using namespace std;
class Solution {
public:
    int minOperations(string s) {
        int c1 = 0, c2 = 0;

        for(int i = 0; i < s.size(); i++) {
            
            // pattern 010101...
            if(s[i] != (i % 2 + '0'))
                c1++;

            // pattern 101010...
            if(s[i] != ((i + 1) % 2 + '0'))
                c2++;
        }

        return min(c1, c2);
    }
};