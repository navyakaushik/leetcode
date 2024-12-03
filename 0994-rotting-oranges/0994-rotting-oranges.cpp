class Solution {
public:
    vector<pair<int, int>> directions{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        if (n == 0 || m == 0) return -1;

        queue<pair<int, int>> q;

        // Push all rotten oranges into the queue
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) q.push({i, j});
            }
        }

        int time = 0;

        // Perform BFS
        while (!q.empty()) {
            int N = q.size();

            while (N--) {
                auto curr = q.front();
                q.pop();

                int x = curr.first;
                int y = curr.second;

                for (auto& dir : directions) {
                    int new_x = x + dir.first;
                    int new_y = y + dir.second;

                    if (new_x >= 0 && new_x < n && new_y >= 0 && new_y < m && grid[new_x][new_y] == 1) {
                        grid[new_x][new_y] = 2;
                        q.push({new_x, new_y});
                    }
                }
            }

            // Increment time after processing all oranges in the current layer
            if (!q.empty()) time++;
        }

        // Check if there are any fresh oranges left
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) return -1; // Some oranges are still fresh
            }
        }

        return time;
    }
};
