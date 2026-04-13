#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>mat(n,vector<int>(n));
       int row=n;
       int col=mat[0].size();
       int total=n*n;
      
       int strow=0;
       int endrow=n-1;
       int stcol=0;
       int endcol=col-1;
       int k=1;
       
       
       while(k<=total){
       for(int index=stcol;index<=endcol&&k<=total;index++){
        mat[strow][index]=k;
        k++;
       
       }
       strow++;
       for(int index=strow;index<=endrow&&k<=total;index++ ){
          mat[index][endcol]=k;
          k++;
       
       }
       endcol--;
       for(int index=endcol;index>=stcol&&k<=total;index--){
          mat[endrow][index]=k;
          k++;
        
       }
       endrow--;
       for(int index=endrow;index>=strow&&k<=total;index-- ){
          mat[index][stcol]=k;
          k++;
       
       }
       stcol++;
       }
       return mat;


    }
};
