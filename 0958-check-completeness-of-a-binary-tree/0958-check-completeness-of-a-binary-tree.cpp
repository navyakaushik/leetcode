class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if (root == NULL)
            return true;
        
        int totalNodes = countNodes(root); 
        return dfs(root, 1, totalNodes); 
    }
    
    int countNodes(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }

    bool dfs(TreeNode* root, int i, int totalNodes) {
        if (root == NULL)
            return true;
        
        if (i > totalNodes)
            return false;
        
        return dfs(root->left, 2 * i, totalNodes) &&
               dfs(root->right, 2 * i + 1, totalNodes);
    }
};
