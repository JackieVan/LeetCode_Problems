// author: Jackie
// time: 22-8-17
// leetcode link: https://leetcode.cn/problems/longest-palindromic-substring/

class Solution {
public:
    string longestPalindrome(string s) {
        std::vector<std::pair<int, int>> seed;
        for (int i = 0; i != s.size() - 1; ++i)
        {
            if (i >=1 && s[i-1] == s[i+1])
            {
                seed.emplace_back(i-1, i+1);
            }
            if (s[i] == s[i+1])
            {
                seed.emplace_back(i, i+1);
            }
        }
        string ans;
        int h = 0;
        int e = 0;
        for (int i = 0; i != seed.size(); ++i)
        {
            int p = seed[i].first;
            int q = seed[i].second;
            while (p-1 >= 0 && q+1 < s.size() && s[p - 1] == s[q + 1])
            {
                --p;
                ++q;
            }
            if (q-p > h-e)
            {
                h = q;
                e = p;
            }
            if (h-e+1 == s.size())
            {
                break;
            }
        }
        return string(s, e, h-e+1);
    }
};