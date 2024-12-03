/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int Find_d(TreeNode* node, int& diameter){
        if(node == NULL) return 0;
        
        int lh = Find_d(node->left, diameter);
        int rh = Find_d(node->right, diameter);
        
        diameter = max(diameter, lh+rh);
        return 1+ max(lh, rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        Find_d(root, diameter);
        return diameter;
        
    }
};