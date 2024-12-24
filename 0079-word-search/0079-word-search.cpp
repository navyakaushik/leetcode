class Solution {
public:
    
    vector<vector<int>> directions{{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int n;
    int m;
    
    bool dfs(int i, int j, string& word, vector<vector<char>>& board, int idx){
        if(idx == word.size()) return true;
        
        char temp = board[i][j];
        board[i][j] = '#';
        
        for(auto& dir : directions){
            int new_i = i + dir[0];
            int new_j = j + dir[1];
            
            if(new_i >= 0 && new_i < n && new_j >= 0 && new_j < m && board[new_i][new_j] == word[idx]){
                if(dfs(new_i, new_j, word, board, idx+1)) return true;
            }
        }
        board[i][j] = temp;
        
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        n = board.size();
        m = board[0].size();
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(board[i][j] == word[0]){
                    
                    if(dfs(i, j, word, board, 1)){
                        return true;
                    }
                }
            }
        }
        return false;
        
    }
};