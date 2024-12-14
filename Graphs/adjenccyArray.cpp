class Solution
{
public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>> &edges)
    {
        int E = edges.size();
        vector<vector<int>> arr(V);
        for (int i = 0; i < E; i++)
        {
            arr[edges[i].first].push_back(edges[i].second);
            arr[edges[i].second].push_back(edges[i].first);
        }
        return arr;
    }
}