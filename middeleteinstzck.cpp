#include<iostream>
#include<vector>    
using namespace std;
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total = 0;

        for(int n : nums)
            total += n;

        int leftSum = 0;

        for(int i = 0; i < nums.size(); i++){
            int rightSum = total - leftSum - nums[i];

            if(leftSum == rightSum)
                return i;

            leftSum += nums[i];
        }

        return -1;
    }
    int main(){
        vector<int> nums = {2, 3, -1, 8, 4};
        cout << findMiddleIndex(nums) << endl;
        return 0;
    }
};