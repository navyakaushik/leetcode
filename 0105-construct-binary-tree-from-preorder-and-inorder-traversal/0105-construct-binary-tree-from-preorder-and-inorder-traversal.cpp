class Solution {
public:
    // Recursive helper function to build the tree
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int start, int end, int& idx) {
        // Base case: if the range is invalid (start > end), return NULL
        if(start > end)
            return NULL;

        // Step 1: Get the root value from preorder at current index (idx)
        int rootVal = preorder[idx];
        
        // Step 2: Find the root value in inorder to split left and right subtrees
        int i = start;
        for(; i <= end; i++) {
            if(inorder[i] == rootVal)  // Root found
                break;
        }

        // Increment idx to move to the next root in preorder
        idx++;

        // Step 3: Create the root node with the root value
        TreeNode* root = new TreeNode(rootVal);

        // Step 4: Recursively build the left subtree
        root->left  = solve(preorder, inorder, start, i-1, idx);

        // Step 5: Recursively build the right subtree
        root->right = solve(preorder, inorder, i+1, end, idx);

        return root;  // Return the constructed subtree
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        int idx = 0;  // Start with the first index in preorder
        return solve(preorder, inorder, 0, n-1, idx);
    }
};
