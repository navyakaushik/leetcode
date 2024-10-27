#include <vector>
#include <queue>
#include <cmath>
#include <utility>

using namespace std;

class Solution {
public:
    typedef pair<int, int> p;  // Corrected the typedef

    int primsAlgo(vector<vector<p>>& adj, int V) {
        priority_queue<p, vector<p>, greater<p>> pq;
        vector<bool> inMST(V, false);  // Corrected 'v' to 'V'

        pq.push({0, 0});

        int sum = 0;

        while (!pq.empty()) {
            auto p = pq.top();
            pq.pop();  // Corrected from pq.top() to pq.pop()

            int wt = p.first;
            int node = p.second;

            if (inMST[node]) continue;

            inMST[node] = true;  // Corrected 'n' to 'node'

            sum += wt;

            for (auto& temp : adj[node]) {
                int neighbour = temp.first;
                int neighbour_wt = temp.second;

                if (!inMST[neighbour]) {
                    pq.push({neighbour_wt, neighbour});  // Added missing semicolon
                }
            }
        }
        return sum;
    }

    int minCostConnectPoints(vector<vector<int>>& points) {
        int V = points.size();
        vector<vector<p>> adj(V);

        for (int i = 0; i < V; i++) {  // Corrected 'v' to 'V'
            for (int j = i + 1; j < V; j++) {
                int x1 = points[i][0];
                int y1 = points[i][1];
                int x2 = points[j][0];
                int y2 = points[j][1];

                int d = abs(x1 - x2) + abs(y1 - y2);  // Corrected to Manhattan distance formula

                adj[i].push_back({j, d});
                adj[j].push_back({i, d});
            }
        }

        return primsAlgo(adj, V);
    }
};
