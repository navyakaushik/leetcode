class Solution {
public:
    
    int n;
    
    void dfs(vector<int>& edges, int node, vector<int>& dist_node, vector<bool>& visited){
        visited[node] = true;
        
        int v = edges[node];
        
        if(v != -1 && !visited[v]){
            visited[v] = true;
            dist_node[v] = 1 + dist_node[node];
            dfs(edges, v, dist_node, visited);
        }
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        
        n = edges.size();
        
        vector<int> dist1(n , INT_MAX);
        vector<int> dist2(n, INT_MAX);
        
        vector<bool> visited1(n, false);
        vector<bool> visited2(n, false);
        
        dist1[node1] = 0;
        dist2[node2] = 0;
        
        dfs(edges, node1, dist1, visited1);
        dfs(edges, node2, dist2, visited2);
        
        int minDistNode = -1;
        int minDistanceTillNow = INT_MAX;
        
        for(int i = 0; i < n; i++){
            int maxD = max(dist1[i] , dist2[i]);
            
            if(minDistanceTillNow > maxD){
                minDistanceTillNow = maxD;
                minDistNode = i;
            }
            
        }
        return minDistNode;   
    }
};