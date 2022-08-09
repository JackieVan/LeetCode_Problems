// author: Jackie
// time: 22-8-8
// leetcode link: https://leetcode.cn/problems/perfect-squares/submissions/

class Solution {
public:
    int numSquares(int n) {
        vector<int> f(n + 1);
        for (int i = 1; i <= n; i++) 
        {
            int min = INT_MAX;
            for (int j = 1; j * j <= i; j++) 
            {
                min = std::min(min, f[i - j * j]);
            }
            f[i] = min + 1;
        }
        return f[n];
    }
};