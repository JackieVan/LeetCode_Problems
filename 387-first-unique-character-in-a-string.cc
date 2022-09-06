// author: Jackie
// time: 22-9-6
// leetcode link: https://leetcode.cn/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<int, int> frequency;
        for (char ch : s) {
            ++frequency[ch];
        }
        for (int i = 0; i < s.size(); ++i) {
            if (frequency[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};