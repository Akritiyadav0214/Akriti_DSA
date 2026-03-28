#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// class Solution {
//   public:
//     vector<int> leaders(vector<int>& arr) {
//         vector<int>v;
//         bool test=false;
//        for(int i=0;i<arr.size();i++){
//            for(int j=i;j<arr.size();j++){
//                if(arr[i]>=arr[j]){
//                    test=true;
//                }
//                else{
//                  test=false;
//                  break;
//                }
//            }
//            if(test==true){
//                v.push_back(arr[i]);
//            }
//        }
//     // this code will cause time limit exceeded
    
//        return v;
//     }
// };
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> v;

        int max_right = arr[n - 1];
        v.push_back(max_right);

        // traverse from right to left
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= max_right) {
                max_right = arr[i];
                v.push_back(arr[i]);
            }
        }

        // reverse to maintain original order
        reverse(v.begin(), v.end());

        return v;
    }
};