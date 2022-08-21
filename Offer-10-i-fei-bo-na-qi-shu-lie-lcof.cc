// author: Jackie
// time: 22-8-21
// leetcode link: https://leetcode.cn/problems/fei-bo-na-qi-shu-lie-lcof/

class Solution {
public:
    int fib(int n) 
    {
        if (n <= 1)
        {
            return n;
        }
        int last = 1;
        int before_last = 0;
        for (int i = 2; i != n+1; ++i)
        {
            int temp = last + before_last;
            before_last = last;
            last = temp % 1000000007;
        }
        return last;
    }
};