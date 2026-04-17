#include<iostream>
#include<vector>
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2, -1);

        int st = 0, end = nums.size() - 1;

        // 🔍 Find FIRST occurrence
        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target) {
                v[0] = mid;
                end = mid - 1;  // move left
            }
            else if (nums[mid] < target) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        st = 0, end = nums.size() - 1;

        // 🔍 Find LAST occurrence
        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target) {
                v[1] = mid;
                st = mid + 1;  // move right
            }
            else if (nums[mid] < target) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return v;
    }
};