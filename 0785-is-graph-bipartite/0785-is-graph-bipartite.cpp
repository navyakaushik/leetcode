class Solution {
public:

    bool checkBipartiteDFS(vector<vector<int>>& adj, int curr, vector<int>& color, int currColor) {
        color[curr] = currColor;  // Set the current node's color
        
        for (int &v : adj[curr]) {
            if (color[v] == color[curr])  // If the adjacent node has the same color, return false
                return false;
            if (color[v] == -1) {  // If the adjacent node is not colored, color it with the opposite color
                int colorOfV = 1 - currColor;
                if (checkBipartiteDFS(adj, v, color, colorOfV) == false)
                    return false;
            }
        }
        return true;
    }



    bool isBipartite(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> color(V, -1);  // Initialize all vertices as uncolored (-1)
        
        // Check for each connected component in case of disconnected graph
        for (int i = 0; i < V; i++) {
            if (color[i] == -1) {  // If this node is not colored, start DFS with color 0
                if (checkBipartiteDFS(adj, i, color, 0) == false)
                    return false;
            }
        }
        return true;
    }
};
