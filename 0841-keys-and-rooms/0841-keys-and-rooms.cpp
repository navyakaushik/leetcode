class Solution {
public:
    void dfs(vector<vector<int>>& rooms, int source, vector<bool> &visited){
        visited[source] = true;
        
        for(int &node : rooms[source]){
            if(!visited[node]){
                dfs(rooms, node, visited);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n, false);
        dfs(rooms, 0, visited);
        for(bool x : visited){
            if(x == false){  // one room we found which is not visited
                return false;
            }
        }
        return true;
        
    }
};