class Solution
{
public:
    vector<int> bfsOfGraph(vector<vector<int>> &adj)
    {
        int n = adj.size();
        vector<int> visited(n, 0);
        visited[0] = 1;
        queue<int> que;
        que.push(0);
        vector<int> bfs;
        while (!que.empty())
        {
            int node = que.front();
            que.pop();
            bfs.push_back(node);

            for (auto val : adj[node])
            {
                if (!visited[val])
                {
                    visited[val] = 1;
                    que.push(val);
                }
            }
        }
        return bfs;
    }
}