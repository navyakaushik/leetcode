class Solution {
public:
    
    vector<vector<int>> directions{{1,1}, {0,1}, {1,0}, {-1,0}, {0,-1}, {-1,-1}, {1,-1}, {-1,1}};
    typedef pair<int, pair<int, int>> P;
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        if(m == 0 || n == 0 || grid[0][0] != 0) return -1;
        
        auto isSafe = [&](int x, int y){
            return x >=0 && x < n && y >= 0 && y < m;
        };
        
        vector<vector<int>> result(n, vector<int>(n, INT_MAX));
        priority_queue<P, vector<P>, greater<P>> pq;
        
        
        pq.push({0, {0,0}});
        result[0][0] = 1;
        
        while(!pq.empty()){
            int d = pq.top().first;
            pair<int, int> node = pq.top().second;
            pq.pop();
            
            int x = node.first;
            int y = node.second;
            
            if(x == n-1 && y == m - 1) return d + 1;
            
            for(auto dir : directions){
                int x_ = x + dir[0];
                int y_ = y + dir[1];
                int dist = 1;
                
                if(isSafe(x_, y_) && grid[x_][y_] == 0 && d + dist < result[x_][y_]){
                    pq.push({d+dist, {x_, y_}});
                    result[x_][y_] = d+ dist;
                }
            }
            
        }
        return -1;
        
        
        
    }
};