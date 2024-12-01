class Solution {
public:
    
    vector<int> parent;
    vector<int> rank;
    
    // to find the function with path compression
    
    int find(int x){
        if(x == parent[x]) return x;
        return parent[x] = find(parent[x]);
    }
    
    void Union(int x, int y){
        int x_parent = find(x);
        int y_parent = find(y);
        
        if(x_parent  == y_parent) return;
        
        if(rank[x_parent] > rank[y_parent]){
            parent[y_parent] = x_parent;
        }
            
        else if(rank[y_parent] < rank[x_parent]){
            parent[x_parent] = y_parent;
            
        } else {
            parent[x_parent] = y_parent;
            rank[y_parent]++;
        }
      
    }
    
    //function to return the number of operations needed to connect all components
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        if(connections.size() < n - 1) return -1;
        
        //initialize parent and rank arrays
        parent.resize(n);
        rank.resize(n, 0);
        
        //each node is its own parent initially
        for(int i = 0; i < n; i++){
            parent[i] = i;
        }
        
        //initially there are n components
        int components = n;
        
        //union all the connected nodes
        for(auto &vec : connections){
            if(find(vec[0]) != find(vec[1])){
                Union(vec[0], vec[1]);
                components--;  // reduce number of components when two are merged
            }
        }
        
        //the number of extra edges needed
        return components - 1;
    }
};