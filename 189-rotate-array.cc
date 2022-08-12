// author: Jackie
// time: 22-8-12
// leetcode link: 

class Solution {
public:
    // void rotate(vector<int>& nums, int k) {
        // k = k % nums.size();
        // vector<int> cp = nums;
        // for (int i = 0; i != nums.size(); ++i)
        // {
        //     int idx = (i+k) % nums.size();
        //     nums[idx] = cp[i];
        // }
    // }
        // another solution
        void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        int count = gcd(k, n);
        for (int start = 0; start < count; ++start) {
            int current = start;
            int prev = nums[start];
            do {
                int next = (current + k) % n;
                swap(nums[next], prev);
                current = next;
            } while (start != current);
        }
    }
};