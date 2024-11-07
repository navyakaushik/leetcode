class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        unordered_map<int, vector<pair<int, int>>> adj;

        // Construct the adjacency list
        for (auto &vec : roads) {
            int u = vec[0];
            int v = vec[1];
            int d = vec[2];

            adj[u].push_back({v, d});
            adj[v].push_back({u, d});
        }

        vector<bool> visited(n + 1, false);  // 1-based indexing
        int result = INT_MAX;

        // Start DFS from node 1 (or an arbitrary starting point)
        dfs(1, adj, visited, result);

        return result;
    }


    void dfs(int u, unordered_map<int, vector<pair<int, int>>>& adj, vector<bool>& visited, int& result) {
        visited[u] = true;

        for (auto &p : adj[u]) {
            int v = p.first;
            int d = p.second;

            // Update the result with the minimum edge weight in the connected component
            result = min(result, d);

            if (!visited[v]) {
                dfs(v, adj, visited, result);
            }
        }
    }
};
