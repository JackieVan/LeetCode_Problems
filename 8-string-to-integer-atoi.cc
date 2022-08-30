// author: Jackie
// time: 22-8-30
// leetcode link: https://leetcode.cn/problems/string-to-integer-atoi/

class Solution {
public:
    int myAtoi(string s) 
    {
        std::stringstream ss(s);
        int ans = 0;
        ss >> ans;
        return ans;
    }
        
};