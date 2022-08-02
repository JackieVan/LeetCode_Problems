// author: Jackie
// time: 22-8-2
// leetcode link: https://leetcode.cn/problems/increasing-decreasing-string/

class Solution {
public:
    string sortString(string s) {
        std::map<char, int> map;
        for (char ch : s)
        {
            map[ch]++;
        }
        string str;
        int count = s.size();
        while (count != 0)
        {
            // step 0
            for (auto it = map.begin(); it != map.end(); ++it)
            {
                if (it->second != 0)
                {
                    str.append(1, it->first);
                    --it->second;
                    --count;
                }
            }

            // step 1
            for (auto it = map.rbegin(); it != map.rend(); ++it)
            {
                if (it->second != 0)
                {
                    str.append(1, it->first);
                    --it->second;
                    --count;
                }
            }
        }
        return str;
    }
};