class Solution
{
private:
    void bfs(int row, int col, vector<vector<char>> &grid)
    {
        grid[row][col] = '0';
        queue<pair<int, int>> q;
        q.push({row, col});
        while (!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            if (col - 1 >= 0 && grid[row][col - 1] == '1')
            {
                grid[row][col - 1] = '0';
                q.push({row, col - 1});
            }
            if (col + 1 < grid[0].size() && grid[row][col + 1] == '1')
            {
                grid[row][col + 1] = '0';
                q.push({row, col + 1});
            }
            if (row - 1 >= 0 && grid[row - 1][col] == '1')
            {
                grid[row - 1][col] = '0';
                q.push({row - 1, col});
            }
            if (row + 1 < grid.size() && grid[row + 1][col] == '1')
            {
                grid[row + 1][col] = '0';
                q.push({row + 1, col});
            }
        }
    }

public:
    int numIslands(vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < m; col++)
            {
                if (grid[row][col] == '1')
                {
                    count++;
                    bfs(row, col, grid);
                }
            }
        }
        return count;
    }
};