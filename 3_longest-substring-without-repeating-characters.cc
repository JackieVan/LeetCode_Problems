// author: Jackie
// time: 22-7-26
// leetcode link: https://leetcode.cn/problems/longest-substring-without-repeating-characters/solution/

// using hash table
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        if (s.size() <= 1)
        {
            return s.size();
        }
        int start = 0;
        int end = 1;
        int max = 1;
        std::unordered_map<char, int> map;
        map[s[0]] = 0;
        for (int i = 1; i != s.size(); ++i)
        {
            end = i;
            if (map.count(s[i]) == 0)
            {
                map[s[i]] = i;
            }
            else
            {
                int size = end - start;
                max = max > size ? max : size;
                int repeat_idx = map[s[i]];
                map[s[i]] = i;
                // move the start pointer
                for (int j = start; j != repeat_idx; ++j)
                {
                    map.erase(s[j]);
                }
                start = repeat_idx + 1;
            }
        }
        int temp = end - start + 1;
        return max > temp ? max : temp; 
    }
};
