// author: Jackie
// time: 22-7-26
// leetcode link: https://leetcode.cn/problems/path-with-maximum-gold/submissions/

class Solution {
private:
    int max = 0;
    void dfs(vector<vector<int>>& grid, int i, int j, int gold, int found)
    {
        int record = grid[i][j];
        gold += record;
        if (gold > max)
        {
            max = gold;
        }
        if (++found == 25)
        {
            return;
        }
        grid[i][j] = 0;
        // search four directions
        // 1. up
        if ( i - 1 > -1 && grid[i-1][j] > 0)
        {
            dfs(grid, i - 1, j, gold, found);
        }
        // 2. down
        if ( i + 1 < grid.size() && grid[i+1][j] > 0)
        {
            dfs(grid, i + 1, j, gold, found);
        }
        // 3. right
        if ( j + 1 < grid[0].size() && grid[i][j+1] > 0)
        {
            dfs(grid, i, j + 1, gold, found);
        }
        // 4. left
        if ( j - 1 > -1  && grid[i][j-1] > 0)
        {
            dfs(grid, i, j - 1, gold, found);
        }
        grid[i][j] = record;
    }

public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int raw_num = grid.size();
        int col_num = grid[0].size();
        for (int i = 0; i != raw_num; ++i)
        for (int j = 0; j != col_num; ++j)
        {
            if (grid[i][j] > 0)
            {
                dfs(grid, i, j, 0, 0);
            }
        }
        return max;
    }

};