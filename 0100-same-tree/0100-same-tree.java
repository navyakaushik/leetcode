/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
*/

class Solution {
    public boolean isSameTree(TreeNode p, TreeNode q) {
        if (p== null && q == null){ //if both are null they are same
            return true;
        }
        if (p == null || q == null){ // if not no
            return false;
        }
        
        return ((p.val == q.val) // values of p and q are same 
            &&isSameTree(p.left, q.left) &&isSameTree(p.right, q.right));
            
    }
}