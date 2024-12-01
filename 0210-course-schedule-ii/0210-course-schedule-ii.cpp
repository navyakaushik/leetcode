class Solution {
public:
    
    vector<int> topoSort(unordered_map<int, vector<int>>&adj, int n, vector<int>& indegree){
        
        queue<int> que;
        vector<int> result;
        int count = 0;
        
        for(int i = 0; i < n; i++){
            if(indegree[i] == 0){
                count++;
                result.push_back(i);
                que.push(i);
            }
        }
        
        while(!que.empty()){
            
            int u = que.front();
            que.pop();
            
            for(int &v : adj[u]){
                indegree[v]--;
                
                if(indegree[v] == 0){
                    count++;
                    que.push(v);
                    result.push_back(v);
                }
            }
        }
        
        if(count == n) return result;
        return {};
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        unordered_map<int, vector<int>> adj;
        vector<int> indegree(numCourses, 0);
        
        for(auto &vec : prerequisites){
            int a = vec[0];
            int b = vec[1];
            
            adj[b].push_back(a);
            indegree[a]++;
        }
        return topoSort(adj, numCourses, indegree);
        
    }
};