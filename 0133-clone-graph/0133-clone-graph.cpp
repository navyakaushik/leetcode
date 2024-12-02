/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> mp; // Map to track cloned nodes

    // Helper DFS function to clone the graph
    void DFS(Node* node, Node* clone_node) {
        for (Node* n : node->neighbors) {
            if (mp.find(n) == mp.end()) {
                // Create a new clone for the neighbor
                Node* clone = new Node(n->val);
                mp[n] = clone;

                // Add the clone to the neighbors of the current clone node
                clone_node->neighbors.push_back(clone);

                // Recursively clone the neighbors
                DFS(n, clone);
            } else {
                // If already cloned, just add the existing clone to the neighbors
                clone_node->neighbors.push_back(mp[n]);
            }
        }
    }

    Node* cloneGraph(Node* node) {
        if (!node) return nullptr; // Handle the edge case of an empty graph

        mp.clear(); // Clear the map for fresh cloning
        Node* clone_node = new Node(node->val); // Clone the starting node
        mp[node] = clone_node; // Map the original node to its clone
        DFS(node, clone_node); // Start DFS cloning
        return clone_node; // Return the cloned graph
    }
};
