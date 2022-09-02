// author: Jackie
// time: 22-9-2
// leetcode link: https://leetcode.cn/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if (s.size() != t.size())
        {
            return false;
        }
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        for (int i = 0; i != s.size(); ++i)
        {
            if (s[i] != t[i])
            {
                return false;
            }
        }
        return true;
    }
};