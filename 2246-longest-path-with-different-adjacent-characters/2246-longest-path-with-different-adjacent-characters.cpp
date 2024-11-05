class Solution {
public:
    int result = 0;
    int DFS(unordered_map<int, vector<int>> &adj, int curr, int parent, string &s){
        int longest = 0;
        int second_longest = 0;
        
        for(int &child : adj[curr]){
            if(child == parent) continue;
            int child_longest_length = DFS(adj, child, curr, s);
            
            if(s[child] == s[curr])
                continue;
        
            if(child_longest_length > second_longest)
            second_longest = child_longest_length;
        
            if(second_longest > longest)
            swap(longest, second_longest);
    }
    
    int only_one = max(longest, second_longest) + 1;
    int only_root = 1;
    int child_ans = 1 + longest + second_longest;
    
    result = max({result, only_one, only_root, child_ans});
    return max(only_one, only_root);
    
}
    
    int longestPath(vector<int>& parent, string s) {
        int n = parent.size();
        unordered_map<int, vector<int>> adj;
        result = 0;
        
        for(int i = 1; i < n; i++){
            int u = i;
            int v = parent[i];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        DFS(adj, 0 , -1, s);
        return result;
    }
};