class Solution
{
    void bfs(int row, int col, vector<vector<int>> &image, int color)
    {
        ;
        int currColor = image[row][col];
        if (currColor == color)
            return;
        image[row][col] = color;
        queue<pair<int, int>> que;
        que.push({row, col});
        int n = image.size();
        int m = image[0].size();
        while (!que.empty())
        {
            int row = que.front().first;
            int col = que.front().second;
            que.pop();
            for (int delrow = -1; delrow <= 1; delrow++)
            {
                for (int delcol = -1; delcol <= 1; delcol++)
                { // shortcut for 8 directions
                    if (abs(delrow) == abs(delcol))
                        continue; // key note skipping diagonals
                    int nrow = row + delrow;
                    int ncol = col + delcol;
                    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == currColor)
                    {
                        image[nrow][ncol] = color;
                        que.push({nrow, ncol});
                    }
                }
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        bfs(sr, sc, image, color);
        return image;
    }
};