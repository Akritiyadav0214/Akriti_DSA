#include <iostream>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> lastIndex;
    int left = 0;
    int maxLength = 0;

    for (int right = 0; right < s.length(); right++) {
        char current = s[right];

        // If character seen and inside current window
        if (lastIndex.find(current) != lastIndex.end() && 
            lastIndex[current] >= left) {
            left = lastIndex[current] + 1;
        }

        lastIndex[current] = right;
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);
    return 0;
}