// author: Jackie
// time: 22-7-26
// leetcode link: https://leetcode.cn/problems/find-the-winner-of-an-array-game/submissions/

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int num = arr.size();
        if (k >= num)
        {
            int max = 0;
            for (int val : arr)
            {
                if (val > max)
                {
                    max = val;
                }
            }
            return max;
        }
        // simulate the game
        int max_times = 0;
        int winner = 0;
        int next = 1;
        int bias = 1;
        while (max_times != k)
        {
            if (arr[winner] > arr[next])
            {
                ++max_times;
            }
            else
            {
                winner = next;
                max_times = 1;
                bias = 0;
            }
            next = (winner + max_times + bias) % num;
        }
        return arr[winner];
    }
};