// author: Jackie
// time: 22-8-7
// leetcode link: https://leetcode.cn/problems/maximum-value-after-insertion/submissions/

class Solution {
public:
    string maxValue(string n, int x) {
        int size = n.size();
        int s = n[0] == '-' ? 1 : 0;
        for (int i = s; i != size; ++i)
        {
            if (n[0] != '-' && x > n[i] - '0')
            {
                n.insert(i, to_string(x));
                break;
            }
            else if (n[0] == '-' && x < n[i] - '0')
            {
                n.insert(i, to_string(x));
                break;
            }
        }
        if (size == n.size())
        {
            n += to_string(x);
        }
        return n;
    }
};