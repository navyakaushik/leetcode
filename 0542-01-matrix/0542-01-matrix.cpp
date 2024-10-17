class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        queue<pair<pair<int,int>, int>> bfsQueue;
        vector<vector<int>> visited(rows, vector<int>(cols, 0)); 
        vector<vector<int>> distance(rows, vector<int>(cols, INT_MAX));  // Initialize distances as max value
        
        // Enqueue all '0' cells and mark them as visited
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(matrix[i][j] == 0){
                    bfsQueue.push({{i, j}, 0});
                    visited[i][j] = 1;
                    distance[i][j] = 0;  // Distance to itself is 0
                }
            }
        }
        
        int rowOffsets[] = {-1, 0, 1, 0};
        int colOffsets[] = {0, 1, 0 , -1};
        
        // Perform BFS to find the shortest distance to a '0' for each cell
        while(!bfsQueue.empty()){
            int currentRow = bfsQueue.front().first.first;
            int currentCol = bfsQueue.front().first.second;
            int dist = bfsQueue.front().second;
            bfsQueue.pop();
            
            // Explore the four possible directions (up, down, left, right)
            for(int i = 0; i < 4; i++){
                int newRow = currentRow + rowOffsets[i];
                int newCol = currentCol + colOffsets[i];
                
                // Check if the new position is within bounds and unvisited
                if(newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols && visited[newRow][newCol] == 0){
                    bfsQueue.push({{newRow, newCol}, dist + 1});
                    visited[newRow][newCol] = 1;
                    distance[newRow][newCol] = dist + 1;  // Update the distance
                }
            }
        }
        
        return distance;  
    }
};
