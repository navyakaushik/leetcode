class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int initialColor = image[sr][sc];
        
        if(initialColor == newColor) return image;
        
        int n = image.size();
        int m = image[0].size();
        
        queue<pair<int, int>> q;
        q.push({sr, sc});
        
        int delRow[] = {-1, 0, +1, 0};
        int delCol[] = {0, +1, 0, -1};
        
        image[sr][sc] = newColor;
        
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            for(int i = 0; i < 4; i++){
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];
                
                if(nrow>= 0 && nrow< n && ncol>=0 && ncol < m && image[nrow][ncol] == initialColor){
                    image[nrow][ncol] = newColor;
                    q.push({nrow, ncol});
                }
            }
        }
        return image;
        
    }
};