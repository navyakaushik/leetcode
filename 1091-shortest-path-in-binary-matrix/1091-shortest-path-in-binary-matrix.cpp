class Solution {
public:
    vector<vector<int>> directions{{1, 1}, {0, 1}, {1, 0}, {-1, -1}, {-1, 0}, {0, -1}, {1, -1}, {-1, 1}};

    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        // If the grid is empty or the starting point is blocked, return -1
        if (n == 0 || m == 0 || grid[0][0] != 0) 
            return -1;

        queue<pair<int, int>> q;

        // Start BFS from the top-left corner
        q.push({0, 0});
        int level = 0;

        while (!q.empty()) {
            int N = q.size(); // Number of nodes at the current level

            while (N--) {
                auto curr = q.front();
                int x = curr.first;
                int y = curr.second;
                q.pop();

                // If we've reached the bottom-right corner, return the distance
                if (x == n - 1 && y == m - 1) 
                    return (level + 1);

                // Explore all 8 possible directions
                for (auto& dir : directions) {
                    int x_new = x + dir[0];
                    int y_new = y + dir[1];

                    // Check boundaries and ensure the cell is walkable
                    if (x_new >= 0 && x_new < n && y_new >= 0 && y_new < m && grid[x_new][y_new] == 0) {
                        q.push({x_new, y_new});
                        grid[x_new][y_new] = 1; // Mark the cell as visited
                    }
                }
            }
            level++;
        }

        // If no path is found, return -1
        return -1;
    }
};
