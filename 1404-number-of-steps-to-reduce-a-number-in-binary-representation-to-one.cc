// author: Jackie
// time: 22-8-10
// leetcode link: https://leetcode.cn/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/submissions/

class Solution {
int add(string& s, int bit)
{
    int t = bit;
    bool carry = true;
    while (carry && bit >= 0)
    {
        if (s[bit] == '1')
        {
            s[bit] = '0';
            carry = true;
        }
        else 
        {
            s[bit] = '1';
            carry = false;
        }
        --bit;
    }
    if (bit == -1)
    {
        s = "1" + s;
        t++;
    }
    return t;
}

public:
    int numSteps(string s) {
        int step = 0;
        int idx = s.size() - 1;
        while (idx != 0)
        {
            ++step;
            if (s[idx] == '1') {
                idx = add(s, idx);
            } else {
                --idx;
            }
        }
        return step;
    }
};