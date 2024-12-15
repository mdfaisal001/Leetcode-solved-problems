class Solution
{
private:
    void dfs(int row, int col, int &count, vector<vector<int>> &grid)
    {
        count++;
        grid[row][col] = 0;
        int n = grid.size();
        int m = grid[0].size();
        for (int delrow = -1; delrow <= 1; delrow++)
        {
            for (int delcol = -1; delcol <= 1; delcol++)
            {
                int nrow = row + delrow;
                int ncol = col + delcol;
                if (abs(delrow) == abs(delcol))
                    continue;
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1)
                {
                    dfs(nrow, ncol, count, grid);
                }
            }
        }
    }

public:
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        int maxi = 0;
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < m; col++)
            {
                int count = 0;
                if (grid[row][col] == 1)
                {
                    dfs(row, col, count, grid);
                    maxi = max(maxi, count);
                }
            }
        }
        return maxi;
    }
};