// author: Jackie
// time: 22-8-16
// leetcode link: https://leetcode.cn/problems/container-with-most-water/submissions/

class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int l = 0;
        int r = height.size() - 1;
        int ans = 0;
        while (l < r)
        {
            int area = std::min(height[l], height[r]) * (r - l);
            ans = std::max(ans, area);
            if (height[l] <= height[r])
            {
                ++l;
            }
            else
            {
                --r;
            }
        }
        return ans;
    }
};