#include <bits/stdc++.h>
using namespace std;

int minSwaps(vector<vector<int>>& grid) {
    int n = grid.size();
    vector<int> trailingZeros(n);

    // Count trailing zeros for each row
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = n - 1; j >= 0; j--) {
            if (grid[i][j] == 0)
                count++;
            else
                break;
        }
        trailingZeros[i] = count;
    }

    int swaps = 0;

    for (int i = 0; i < n; i++) {
        int required = n - i - 1;
        int j = i;

        // Find a row with enough trailing zeros
        while (j < n && trailingZeros[j] < required) {
            j++;
        }

        if (j == n)
            return -1;  // Not possible

        // Bring row j up to position i using adjacent swaps
        while (j > i) {
            swap(trailingZeros[j], trailingZeros[j - 1]);
            swaps++;
            j--;
        }
    }

    return swaps;
}

int main() {
    vector<vector<int>> grid = {{0,0,1},{1,1,0},{1,0,0}};
    cout << minSwaps(grid) << endl;  // Output: 3
    return 0;
}