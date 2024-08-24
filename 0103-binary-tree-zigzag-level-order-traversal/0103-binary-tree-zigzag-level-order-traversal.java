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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
       Deque<TreeNode> deque = new LinkedList<>();
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        
        if(root == null)
            return res;
        
        deque.add(root); //traversal started by adding root
        
        while(! deque.isEmpty() ){
            List<Integer> current = new LinkedList<>(); //list to strore lrvrl value
            int m = deque.size(); //number of nodes at current level
            
            for (int i = 0; i < m; i++){ //iterate thru nodes at current level
            TreeNode node = deque.removeFirst(); //remove node from front
        
            if( res.size() % 2 == 0){
                current.add(node.val); //if even add at end
            } else {
                current.add(0, node.val); //if odd at at beginning
        }
        
        if(node.left != null) deque.add(node.left); //left and right child of node
        if(node.right != null) deque.add(node.right);
        }
    res.add(current); 
    }
return res;

}
}

