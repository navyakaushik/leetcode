class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        // If there are not enough connections, return -1
        if (connections.size() < n - 1) {
            return -1;
        }

        // adjacency list
        vector<vector<int>> graph(n);
        for (const auto& connection : connections) {
            graph[connection[0]].push_back(connection[1]);
            graph[connection[1]].push_back(connection[0]);
        }

        // number of connected components
        vector<bool> visited(n, false);
        int components = 0;

        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                components++;

                // BFS
                queue<int> q;
                q.push(i);
                visited[i] = true;

                while (!q.empty()) {
                    int curr = q.front();
                    q.pop();

                    for (int neighbor : graph[curr]) {
                        if (!visited[neighbor]) {
                            visited[neighbor] = true;
                            q.push(neighbor);
                        }
                    }
                }
            }
        }

        // The minimum number of operations required to connect all components
        return components - 1;
    }
};
