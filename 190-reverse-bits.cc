// author: Jackie
// time: 22-8-19
// leetcode link: https://leetcode.cn/problems/reverse-bits/submissions/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for (int i = 0; i != 32; ++i)
        {
            ans |= ((n & 1) << (31 - i));
            n >>= 1;
        }
        return ans;
        // std::vector<int> bits(32);
        // int idx = 31;
        // while (n != 0)
        // {
        //     bits[idx--] = n & 1;
        //     n >>= 1;
        // }
        // uint32_t ans = 0;
        // for (int i = 0; i != 32; ++i)
        // {
        //     ans |= ((bits[i] & 1) << i);
        // }
        // return ans;
    }
};