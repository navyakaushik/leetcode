#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool check(unordered_map<int, vector<int>>& mp, int S, int D, vector<bool>& visited) {
        if (S == D)
            return true;

        if (visited[S] == true)
            return false;

        visited[S] = true;

        // Explore all connected nodes
        for (auto& node : mp[S]) {
            if (check(mp, node, D, visited) == true)  // Pass all four arguments
                return true;
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> mp;

        // Build the adjacency list
        for (vector<int>& edge : edges) {
            int u = edge[0];
            int v = edge[1];

            mp[u].push_back(v);
            mp[v].push_back(u);
        }

        vector<bool> visited(n, false);

        // Start DFS from the source to find a path to the destination
        return check(mp, source, destination, visited);
    }
};
