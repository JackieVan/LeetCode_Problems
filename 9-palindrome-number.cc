// author: Jackie
// time: 22-9-3
// leetcode link: https://leetcode.cn/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) 
    {
        if (x < 0)
        {
            return false;
        }
        std::string str = std::to_string(x);
        long rev_val = 0;
        for (int i = str.size() - 1; i >= 0; --i)
        {
            rev_val *= 10;
            rev_val += str[i] - '0';
        }
        return rev_val == x;
    }
};