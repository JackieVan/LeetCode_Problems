// author: Jackie
// time: 22-8-12
// leetcode link: https://leetcode.cn/problems/search-a-2d-matrix-ii/submissions/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        int j = matrix[0].size() - 1;
        while (i < matrix.size() && j >= 0)
        {
            if (matrix[i][j] == target)
            {
                return true;
            } 
            else if (matrix[i][j] < target)
            {
                ++i;
            } 
            else {
                --j;
            }
        }
        return false;
    }
};