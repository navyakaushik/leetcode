class Solution {
public:
  
    vector<pair<int, int>> dir{{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

    int dfs(vector<vector<int>>& grid, int i, int j) {
     
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0) {
            return 0;
        }

        grid[i][j] = 0;
        int area = 1;

       
        for (auto d : dir) {
            int newRow = i + d.first;
            int newCol = j + d.second;
            area += dfs(grid, newRow, newCol);
        }

        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if (grid.empty()) return 0;

        int maxArea = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
               
                if (grid[i][j] == 1) {
                    int area = dfs(grid, i, j);
                    maxArea = max(maxArea, area);
                }
            }
        }

        return maxArea;
    }
};
