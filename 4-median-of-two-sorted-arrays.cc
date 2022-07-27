// author: Jackie
// time: 22-7-26
// leetcode link: https://leetcode.cn/problems/median-of-two-sorted-arrays/submissions/

// O(m+n), too much runtime
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> res;
        res.reserve(nums1.size() + nums2.size());
        int idx1 = 0;
        int idx2 = 0;
        
        while (idx1 != nums1.size() && idx2 != nums2.size())
        {
            if (nums1[idx1] < nums2[idx2])
            {
                res.push_back(nums1[idx1++]);
            }
            else if ((nums1[idx1] > nums2[idx2]))
            {
                res.push_back(nums2[idx2++]);
            }
            else
            {
                res.push_back(nums1[idx1++]);
                res.push_back(nums2[idx2++]);
                // ++idx1;
                // ++idx2;
            }
        }

        if (idx1 == nums1.size())
        {
            for (int i = idx2; i != nums2.size(); ++i)
            {
                res.push_back(nums2[i]);
            }
        }
        if (idx2 == nums2.size())
        {
            for (int i = idx1; i != nums1.size(); ++i)
            {
                res.push_back(nums1[i]);
            }
        }
        if (res.size() % 2 == 0)
        {
            return (res[res.size() / 2] + res[res.size() / 2 - 1]) / 2.0;
        }
        else
        {
            return res[res.size() / 2];
        }
    }
};


// O(log(m+n))
