// author: Jackie
// time: 22-8-7
// leetcode link: https://leetcode.cn/problems/koko-eating-bananas/submissions/

class Solution {
bool eat_all(const vector<int>& piles, int speed, int h)
{
    int time = 0;
    for (int pile : piles)
    {
        time += (pile + speed - 1) / speed;
    }
    return time <= h;
}

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_speed = 0;
        int min_speed = 1; // at least 1 piles banana for each hour
        for (int pile : piles)
        {
            if (pile > max_speed)
            {
                max_speed = pile;
            }
        }
        int ans = max_speed;
        while (min_speed < max_speed)
        {
            int middle = min_speed + (max_speed - min_speed) / 2;
            if (eat_all(piles, middle, h))
            {
                max_speed = middle;
                ans = middle;
            }
            else
            {
                min_speed = middle + 1;
            }
        }
        return ans;
    }
};