// author: Jackie
// time: 22-8-3
// leetcode link: https://leetcode.cn/problems/broken-calculator/submissions/

class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int step = 0;
        while (startValue < target)
        {
            ++step;
            if (target & 1 == 1) // target is odd 
            {
                ++target;
            }
            else
            {
                target /= 2;
            }
        }
        return step + startValue - target;
    }
};