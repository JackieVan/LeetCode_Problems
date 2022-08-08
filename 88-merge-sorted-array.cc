// author: Jackie
// time: 22-8-8
// leetcode link: https://leetcode.cn/problems/merge-sorted-array/

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         std::vector<int> nums(m + n);
//         int idx_1 = 0, idx_2 = 0, idx = 0;
//         while (idx_1 != m && idx_2 != n)
//         {
//             if (nums1[idx_1] < nums2[idx_2])
//             {
//                 nums[idx++] = nums1[idx_1++];
//             }
//             else if (nums1[idx_1] > nums2[idx_2])
//             {
//                 nums[idx++] = nums2[idx_2++];
//             }
//             else
//             {
//                 nums[idx++] = nums2[idx_2++];
//                 nums[idx++] = nums1[idx_1++];
//             }
//         }
//         if (idx_1 == m)
//         {
//             for (int i = idx_2; i != n; ++i)
//             {
//                 nums[idx++] = nums2[i];
//             }
//         }
//         if (idx_2 == n)
//         {
//             for (int i = idx_1; i != m; ++i)
//             {
//                 nums[idx++] = nums1[i];
//             }
//         }
//         nums1.swap(nums);
//     }
// };
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1, p2 = n - 1;
        int tail = m + n - 1;
        int cur;
        while (p1 >= 0 || p2 >= 0) {
            if (p1 == -1) {
                cur = nums2[p2--];
            } else if (p2 == -1) {
                cur = nums1[p1--];
            } else if (nums1[p1] > nums2[p2]) {
                cur = nums1[p1--];
            } else {
                cur = nums2[p2--];
            }
            nums1[tail--] = cur;
        }
    }
};
