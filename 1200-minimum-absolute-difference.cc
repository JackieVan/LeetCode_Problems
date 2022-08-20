// author: Jackie
// time: 22-8-20
// leetcode link: https://leetcode.cn/problems/minimum-absolute-difference/

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        std::sort(arr.begin(), arr.end());
        std::vector<vector<int>> ans;
        int min_diff = 10000000;
        for (int i = 0; i != arr.size() - 1; ++i)
        {
            if (arr[i+1] - arr[i] > min_diff)
            {
                continue;
            }
            else if (arr[i+1] - arr[i] < min_diff)
            {
                min_diff = arr[i+1] - arr[i];
                ans.clear();
                ans.push_back({arr[i], arr[i+1]});
            }
            else
            {
                ans.push_back({arr[i], arr[i+1]});
            }
        }
        return ans;
    }
};