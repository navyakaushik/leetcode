class Solution {
public:
    vector<int> parent;
    vector<int> rank;

    // Find function with path compression
    int find(int x) {
        if (x == parent[x])
            return x;
        return parent[x] = find(parent[x]);  // Path compression
    }

    // Union function by rank
    void Union(int x, int y) {
        int x_parent = find(x);
        int y_parent = find(y);

        if (x_parent == y_parent)
            return;

        if (rank[x_parent] > rank[y_parent]) {
            parent[y_parent] = x_parent;
        } else if (rank[x_parent] < rank[y_parent]) {
            parent[x_parent] = y_parent;
        } else {
            parent[x_parent] = y_parent;
            rank[y_parent]++;
        }
    }

    // Function to return the number of operations needed to connect all components
    int makeConnected(int n, vector<vector<int>>& connections) {
        if (connections.size() < n - 1)  // Minimum connections required
            return -1;

        // Initialize parent and rank arrays
        parent.resize(n);
        rank.resize(n, 0);
        
        // Each node is its own parent initially
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }

        int components = n;  // Initially, there are 'n' components

        // Union all connected nodes
        for (auto &vec : connections) {
            if (find(vec[0]) != find(vec[1])) {
                Union(vec[0], vec[1]);
                components--;  // Reduce the number of components when two are merged
            }
        }

        // The number of extra edges needed is (components - 1)
        return components - 1;
    }
};
