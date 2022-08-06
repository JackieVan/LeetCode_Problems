// author: Jackie
// time: 22-8-6
// leetcode link: https://leetcode.cn/problems/bu-yong-jia-jian-cheng-chu-zuo-jia-fa-lcof/

class Solution {
public:
    int add(int a, int b) {
        while (b != 0)
        {
            int carry = unsigned(a & b) << 1;
            a = a ^ b;
            b = carry;
        }
        return a;
    }
};