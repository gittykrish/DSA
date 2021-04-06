// count sub matrix with sum x in a given Matrix

// Input: N = 4, M = 5, X = 10, arr[][]={{2, 4, 3, 2, 10}, {3, 1, 1, 1, 5}, {1, 1, 2, 1, 4}, {2, 1, 1, 1, 3}} 
// Output: 3 
// Explanation: 
// {10}, {{2, 4}, {3, 1}} and {{1, 1, 1}, {1, 2, 1}, {1, 1, 1}} are subsquares with sum 10.
// Input: N = 3, M = 4, X = 8, arr[][]={{3, 1, 5, 3}, {2, 2, 2, 6}, {1, 2, 2, 4}} 
// Output: 2 
// Explanation: 
// Sub-squares {{2, 2}, {2, 2}} and {{3, 1}, {2, 2}} have sum 8. int dp[n + 1][m + 1];
  
    memset(dp, 0, sizeof(dp));
  
    // Copying arr to dp and making
    // it indexed 1
    for (int i = 0; i < n; i++) {
  
        for (int j = 0; j < m; j++) {
  
            dp[i + 1][j + 1] = arr[i][j];
        }
    }
  
    // Precalculate and store the sum
    // of all rectangles with upper
    // left corner at (0, 0);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
  
            // Calculating sum in
            // a 2d grid
            dp[i][j] += dp[i - 1][j]
                        + dp[i][j - 1]
                        - dp[i - 1][j - 1];
        }
    }
  
    // Stores the answer
    int cnt = 0;
  
    for (int i = 1; i <= n; i++) {
  
        for (int j = 1; j <= m; j++) {
  
            // Fix upper left corner
            // at {i, j} and perform
            // binary search on all
            // such possible squares
  
            // Minimum length of square
            int lo = 1;
  
            // Maximum length of square
            int hi = min(n - i, m - j) + 1;
  
            // Flag to set if sub-square
            // with sum X is found
            bool found = false;
  
            while (lo <= hi) {
                int mid = (lo + hi) / 2;
  
                // Calculate lower
                // right index if upper
                // right corner is at {i, j}
                int ni = i + mid - 1;
                int nj = j + mid - 1;
  
                // Calculate the sum of
                // elements in the submatrix
                // with upper left column
                // {i, j} and lower right
                // column at {ni, nj};
                int sum = dp[ni][nj]
                          - dp[ni][j - 1]
                          - dp[i - 1][nj]
                          + dp[i - 1][j - 1];
  
                if (sum >= X) {
  
                    // If sum X is found
                    if (sum == X) {
                        found = true;
                    }
  
                    hi = mid - 1;
  
                    // If sum > X, then size of
                    // the square with sum X
                    // must be less than mid
                }
                else {
  
                    // If sum < X, then size of
                    // the square with sum X
                    // must be greater than mid
                    lo = mid + 1;
                }
            }
  
            // If found, increment
            // count by 1;
            if (found == true) {
                cnt++;
            }
        }
    }

#include<bits/stdc++.h>
using namespace std;


int main(){

	int n,

	return 0;
}