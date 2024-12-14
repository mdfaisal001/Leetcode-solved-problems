class Solution
{
private:
    void dfs(int node, vector<int> &vis, vector<vector<int>> &adj, vector<int> &result)
    {
        vis[node] = 1;
        result.push_back(node);

        for (int val : adj[node])
        {
            if (!vis[val])
            {
                dfs(val, vis, adj, result);
            }
        }
    }

public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(vector<vector<int>> &adj)
    {
        int n = adj.size();
        vector<int> vis(n, 0);
        int start = 0;
        vector<int> result;
        dfs(start, vis, adj, result);
        return result;
    }
}