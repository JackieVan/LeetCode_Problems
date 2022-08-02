// author: Jackie
// time: 22-8-2
// leetcode link: https://leetcode.cn/problems/ugly-number-ii/solution/

class Solution {
public:
    int nthUglyNumber(int n) {
        std::set<long long> set = { 1 };
        int count = 0;
        long long ans = 0;
        while (true)
        {
            ans = *set.begin();
            set.erase(set.begin());
            if (++count == n)
            {
                break;
            }
            else if (set.size() < n )
            {
                set.insert(2 * ans);
                set.insert(3 * ans);
                set.insert(5 * ans);                
            }
        }
        return ans;
    }
};

class Solution {
public:
    int nthUglyNumber(int n) {
        std::vector<int> num(n+1, 0);
        num[1] = 1;
        int p2, p3, p5;
        p2 = p3 = p5 = 1;
        for (int i = 2; i != n+1; ++i)
        {
            int num2 = num[p2] * 2;
            int num3 = num[p3] * 3;
            int num5 = num[p5] * 5;
            num[i] = std::min(std::min(num2, num3), num5);
            if (num[i] == num2)
            {
                ++p2;
            }
            if (num[i] == num3)
            {
                ++p3;
            }
            if (num[i] == num5)
            {
                ++p5;
            }
        }
        return num[n];
    }
};