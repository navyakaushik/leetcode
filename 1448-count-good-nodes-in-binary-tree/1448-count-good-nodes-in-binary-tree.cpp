class Solution {
public:
    // Helper function to count good nodes
    void countGoodNodes(TreeNode* node, int& count, int maxVal) {
        // Base case: if the node is null, return
        if (node == NULL) return;
        
        // Check if the current node is a "good" node
        if (node->val >= maxVal) {
            count++; // Increment count of good nodes
            maxVal = node->val; // Update the maximum value along the path
        }
        
        // Recur for the left and right subtrees
        countGoodNodes(node->left, count, maxVal);
        countGoodNodes(node->right, count, maxVal);
    }
    
    // Main function to count good nodes
    int goodNodes(TreeNode* root) {
        int count = 0; // Initialize the count of good nodes
        if (!root) return count; // If the tree is empty, return 0
        
        // Start the recursive function with the root node and its value as the initial maxVal
        countGoodNodes(root, count, root->val);
        
        return count; // Return the final count of good nodes
    }
};
