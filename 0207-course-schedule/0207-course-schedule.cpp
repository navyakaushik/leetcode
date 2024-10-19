#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        unordered_map<int, vector<int>> adj;  // adjacency list
        vector<int> indegree(numCourses, 0);  // indegree array
        
        // Build adjacency list and indegree array
        for (auto &vec : prerequisites) {
            int a = vec[0];
            int b = vec[1];
            
            // b --> a (b is prerequisite for a)
            adj[b].push_back(a);
            
            // Increment indegree of course 'a'
            indegree[a]++;
        }
        
        // Check for cycle using topological sort
        return topologicalSortCheck(adj, numCourses, indegree);
    }
    
private:
    bool topologicalSortCheck(unordered_map<int, vector<int>> adj, int n, vector<int>& indegree) {
        queue<int> que;
        int count = 0;
        
        // Enqueue all courses with indegree 0
        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) {
                que.push(i);
            }
        }
        
        // Process the queue
        while (!que.empty()) {
            int u = que.front();
            que.pop();
            count++;  // Increment count when processing a node
            
            // Decrease the indegree of neighbors
            for (int &v : adj[u]) {
                indegree[v]--;
                
                // If indegree becomes 0, add to queue
                if (indegree[v] == 0) {
                    que.push(v);
                }
            }
        }
        
        // If all courses are processed, no cycle exists
        return count == n;
    }
};
