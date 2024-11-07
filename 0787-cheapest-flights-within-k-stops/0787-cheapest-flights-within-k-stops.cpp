class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        // Initialize distances to max and adjacency list
        vector<int> distance(n, INT_MAX);
        unordered_map<int, vector<pair<int, int>>> adj;

        // Construct adjacency list for the graph
        for (vector<int>& vec : flights) {
            int u = vec[0];
            int v = vec[1];
            int cost = vec[2];
            adj[u].push_back({v, cost});
        }

        // Initialize queue and set the distance to the source as 0
        queue<pair<int, int>> que;
        que.push({src, 0});
        distance[src] = 0;

        int steps = 0;

        // Perform BFS until 'k' stops
        while (!que.empty() && steps <= k) {
            int N = que.size();
            vector<int> tempDist = distance; // Use temp array for this level's updates
            while (N--) {
                int u = que.front().first;
                int d = que.front().second;
                que.pop();

                for (pair<int, int>& p : adj[u]) {
                    int v = p.first;
                    int cost = p.second;

                    // Relaxation condition
                    if (tempDist[v] > d + cost) {
                        tempDist[v] = d + cost;
                        que.push({v, d + cost});
                    }
                }
            }
            distance = tempDist; // Update distances for next level
            steps++;
        }

        return (distance[dst] == INT_MAX) ? -1 : distance[dst];
    }
};
