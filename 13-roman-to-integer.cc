// author: Jackie
// time: 22-8-25
// leetcode link: https://leetcode.cn/problems/roman-to-integer/

class Solution {
public:
    int romanToInt(string s) 
    {
        std::map<char, int> table = {
            {'I', 1 },
            {'V', 5 },
            {'X', 10 },
            {'L', 50 },
            {'C', 100 },
            {'D', 500 },
            {'M', 1000 }
        };

        int val = 0;
        int prev = 0;
        for (int i = 0; i != s.size(); ++i)
        {
            char ch = s[i];
            if (table[ch] > prev)
            {
                val -= (prev << 1);
            }
            val += table[ch];
            prev = table[ch];
        }
        return val;
    }
};