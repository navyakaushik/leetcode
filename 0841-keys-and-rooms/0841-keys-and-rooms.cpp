class Solution {
public:
    void dfs(vector<vector<int>>& rooms, int source, vector<bool>& visited) {
        visited[source] = true;

        for (int &v : rooms[source]) {
            if (!visited[v]) {
                dfs(rooms, v, visited);
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n, false);

        dfs(rooms, 0, visited);

        for (bool check : visited) {
            if (check == false) {
                return false;
            }
        }

        return true; 
    }
};