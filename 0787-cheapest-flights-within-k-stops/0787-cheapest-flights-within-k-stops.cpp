class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        // initialize the distances to max and the adjacency list
        vector<int> distance(n, INT_MAX);
        unordered_map<int, vector<pair<int, int>>> adj;
        
        //unordered list for the graph
        for(vector<int>& vec : flights){
            int u = vec[0];
            int v = vec[1];
            int cost = vec[2];
            adj[u].push_back({v ,cost});
        }
        
        //initialize the queue and set the source as 0
        queue<pair<int, int>> que;
        que.push({src, 0});
        distance[src] = 0;
        
        int steps = 0;
        
        //apply bfs until we get k stops
        
        while(!que.empty() && steps <= k){
            int N = que.size();
            vector<int> tempDist = distance;
            while(N--){
                int u = que.front().first;
                int d = que.front().second;
                que.pop();
                
                for(pair<int, int>& p : adj[u]){
                    int v = p.first;
                    int cost = p.second;
                    
                    if(tempDist[v] > d + cost){
                        tempDist[v] = d + cost;
                        que.push({v , d + cost});
                    }
                }
            }
            distance = tempDist;
            steps++;
            
        }
        return (distance[dst] == INT_MAX) ? -1 : distance[dst];
        
        
        
    }
};