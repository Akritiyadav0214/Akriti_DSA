 #include<iostream>
#include<vector>
#include<stack>
using namespace std;

 class Solution {
private:
    vector<int> nextSmaller(vector<int> &heights, int n) {
        vector<int> ans(n);
        stack<int> s;
        s.push(-1);

        for (int i = n - 1; i >= 0; i--) {
            int curr = heights[i];

            while (s.top() != -1 && heights[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> prevSmaller(vector<int> &heights, int n) {
        vector<int> ans(n);
        stack<int> s;
        s.push(-1);

        for (int i = 0; i < n; i++) {
            int curr = heights[i];

            while (s.top() != -1 && heights[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> next = nextSmaller(heights, n);
        vector<int> prev = prevSmaller(heights, n);

        int area = 0;

        for (int i = 0; i < n; i++) {
            int l = heights[i];

            if (next[i] == -1) {
                next[i] = n;
            }

            int b = next[i] - prev[i] - 1;
            int newArea = l * b;

            area = max(area, newArea);
        }

        return area;
    }
};