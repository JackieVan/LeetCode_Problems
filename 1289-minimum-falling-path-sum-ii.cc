// author: Jackie
// time: 22-8-10
// leetcode link: https://leetcode.cn/problems/minimum-falling-path-sum-ii/

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int dp[n][n];
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        int idx1, idx2;
        for (int j = 0; j != n; ++j)
        {
            dp[0][j] = grid[0][j];
            if (dp[0][j] < min1)
            {
                min2 = min1;
                min1 = dp[0][j];
                idx2 = idx1;
                idx1 = j;
            }
            else if (dp[0][j] < min2)
            {
                min2 = dp[0][j];
                idx2 = j;
            }
        }

        for (int i = 1; i != n; ++i)
        {
            int Min1 = INT_MAX;
            int Min2 = INT_MAX;
            int I1, I2;
            for (int j = 0; j != n; ++j)
            {
                int val = grid[i][j];
                if (idx1 == j)
                {
                    dp[i][j] = min2 + val;
                }
                else 
                {
                    dp[i][j] = min1 + val;
                }
                if (dp[i][j] < Min1)
                {
                    Min2 = Min1;
                    Min1 = dp[i][j];
                    I2 = I1;
                    I1 = j;
                }
                else if (dp[i][j] < Min2)
                {
                    Min2 = dp[i][j];
                    I2 = j;
                }
                // for (int k = 0; k != n; ++k)
                // {
                //     if (k != j && dp[i-1][k] + val < min)
                //     {
                //         min = dp[i-1][k] + val;
                //     }
                // }
                // dp[i][j] = min;
            }
            min1 = Min1;
            min2 = Min2;
            idx1 = I1;
            idx2 = I2;
        }
        int ans = INT_MAX;
        for (int i = 0; i != n; ++i)
        {
            ans = ans > dp[n-1][i] ? dp[n-1][i] : ans;
        }
        return ans;
    }
};