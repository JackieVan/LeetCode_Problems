// author: Jackie
// time: 22-8-25
// leetcode link: https://leetcode.cn/problems/implement-strstr/

class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        if (needle == "")
        {
            return 0;
        }
        if (needle.size() > haystack.size())
        {
            return -1;
        }
        for (int i = 0; i != haystack.size() - needle.size() + 1; ++i)
        {
            bool find = true;
            for (int j = 0; j != needle.size(); ++j)
            {
                if (haystack[i+j] != needle[j])
                {
                    find = false;
                    break;
                }
            }
            if (find)
            {
                return i;
            }
        }
        return -1;
    }
};