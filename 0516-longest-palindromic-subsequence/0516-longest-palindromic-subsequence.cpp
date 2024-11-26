class Solution {
public:
    int t[1001][1001];
    
    int solve(string& s, int i, int j) {
        // Base cases
        if (i > j) return 0;
        if (i == j) return 1;
        
        // If already computed
        if (t[i][j] != -1) return t[i][j];
        
        // If characters match, include both characters
        if (s[i] == s[j]) {
            return t[i][j] = 2 + solve(s, i + 1, j - 1);
        }
        
        // If characters don't match, try excluding either character
        return t[i][j] = max(solve(s, i + 1, j), solve(s, i, j - 1));
    }
    
    int longestPalindromeSubseq(string s) {
        memset(t, -1, sizeof(t));
        return solve(s, 0, s.length() - 1);
    }
};