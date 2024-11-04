class Solution {
public:
    bool bfsCheckBipartite(unordered_map<int, vector<int>> &adj, int node, vector<int>& color) {
        queue<int> que;
        que.push(node);
        color[node] = 1;

        while (!que.empty()) {
            int u = que.front();
            que.pop();

            for (int &v : adj[u]) {
                if (color[v] == color[u])
                    return false;

                if (color[v] == -1) {
                    que.push(v);
                    color[v] = 1 - color[u];
                }
            }
        }
        return true;
    }

    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        unordered_map<int, vector<int>> adj;
        vector<int> color(n + 1, -1);  // Initialize color vector with -1

        for (vector<int> &vec : dislikes) {
            int u = vec[0];
            int v = vec[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for (int i = 1; i <= n; i++) {
            if (color[i] == -1) {
                if (!bfsCheckBipartite(adj, i, color))
                    return false;
            }
        }
        return true;
    }
};
