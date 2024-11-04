class Solution {
public:
    int N;
    long result_base_node;
    vector<int> count;

    int dfsBase(unordered_map<int, vector<int>> &adj, int curr_node, int prev_node, int curr_depth) {
        int total_node = 1;
        result_base_node += curr_depth;  // Accumulate distances to calculate result_base_node
        for (int child : adj[curr_node]) {
            if (child == prev_node) continue;  // Avoid revisiting the parent node
            total_node += dfsBase(adj, child, curr_node, curr_depth + 1);
        }
        count[curr_node] = total_node;  // Update the count of nodes in subtree rooted at curr_node
        return total_node;
    }

    void DFS(unordered_map<int, vector<int>> &adj, int parent_node, int prev_node, vector<int>& result) {
        for (int &child : adj[parent_node]) {
            if (child == prev_node) continue;  // Avoid revisiting the parent node
            result[child] = result[parent_node] - count[child] + (N - count[child]);
            DFS(adj, child, parent_node, result);  // Recursive DFS for other nodes
        }
    }

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> adj;
        N = n;
        count.resize(n, 0);

        // Build adjacency list
        for (auto &vec : edges) {
            int u = vec[0];
            int v = vec[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        result_base_node = 0;  // Initialize result for base node
        dfsBase(adj, 0, -1, 0);  // Calculate distances for base node

        vector<int> result(n, 0);
        result[0] = result_base_node;  // Set base result for root node

        DFS(adj, 0, -1, result);  // Calculate results for all other nodes

        return result;
    }
};
