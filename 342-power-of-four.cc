// author: Jackie
// time: 22-8-15
// leetcode link: https://leetcode.cn/problems/power-of-four/submissions/

class Solution {
public:
    bool isPowerOfFour(int n) {
        return n > 0 && (n & (n - 1)) == 0 && (n & 0xaaaaaaaa) == 0;
    }
};