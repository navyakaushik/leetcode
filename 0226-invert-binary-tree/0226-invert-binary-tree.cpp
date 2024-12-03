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
    TreeNode* invert(TreeNode* node) {
        if(node == NULL) return NULL;
  
        TreeNode* temp = node->left;
        node->left = node->right;
        node->right = temp;
        
              
        TreeNode* leftTree = invert(node->left);
        TreeNode* right_tree = invert(node->right);
        
        
        return node;
        
        
        
    }
    TreeNode* invertTree(TreeNode* root){
        return invert(root);
    }
};