// author: Jackie
// time: 22-8-28
// leetcode link: https://leetcode.cn/problems/palindrome-permutation-lcci/

class Solution {
public:
    bool canPermutePalindrome(string s) 
    {
        int flag[128] = {0};
        for (char ch : s)
        {
            flag[ch] = 1 - flag[ch];
        }
        int test = 0;
        for (int i = 31; i != 128; ++i)
        {
            test += flag[i];
        }
        return test <= 1;
    }
};