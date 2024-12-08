class Solution {
public:
    typedef pair<int, pair<int, int>>P;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<P, vector<P>, less<P>> pq;
        
        for(auto & vec : points){
            int x = vec[0];
            int y = vec[1];
            
            int d = x*x + y*y;
            
            pq.push({d, {x,y}});
            
            if(pq.size() > k){
                pq.pop();
            }
        }
        
        vector<vector<int>> result;
        while(!pq.empty()){
            auto [x, y] = pq.top().second;
            pq.pop();
            
            result.push_back({x,y});
        }
        return result;
        
        
        
    }
};