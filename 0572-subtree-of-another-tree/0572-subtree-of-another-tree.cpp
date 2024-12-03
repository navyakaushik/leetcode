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
  
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Both trees are empty, so they are identical
        if (p == NULL && q == NULL) return true;
        
        // One tree is empty and the other is not, so they are not identical
        if (p == NULL || q == NULL) return false;
        
        // If the values of the current nodes are different, the trees are not identical
        if (p->val != q->val) return false;
        
        // Recursively check if the left and right subtrees are identical
        bool left = isSameTree(p->left, q->left);
        bool right = isSameTree(p->right, q->right);
        
        // If either the left or the right subtree is not identical, return false
        if (!left || !right) return false;

        // Both subtrees are identical, return true
        return true;
    }
    
    // Function to check if subRoot is a subtree of root
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // If the main tree is empty, subRoot cannot be a subtree
        if (root == NULL) return false;
        
        // Check if the trees rooted at the current nodes of root and subRoot are identical
        if (isSameTree(root, subRoot)) return true;
        
        // Recursively check the left and right subtrees of root
        bool leftSubtree = isSubtree(root->left, subRoot);
        bool rightSubtree = isSubtree(root->right, subRoot);
        
        // If either the left or the right subtree contains subRoot, return true
        return leftSubtree || rightSubtree;
    }
};
