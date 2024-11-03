class Solution {
public:
    vector<int> parent;
    vector<int> rank;

    int find(int x) {
        if (x == parent[x])
            return x;
        return parent[x] = find(parent[x]);
    }

    void Union(int x, int y) {
        int x_parent = find(x);
        int y_parent = find(y);

        if (x_parent == y_parent)
            return;
        if (rank[x_parent] > rank[y_parent]) {
            parent[y_parent] = x_parent;
        } else if (rank[x_parent] < rank[y_parent]) {
            parent[x_parent] = y_parent;
        } else {
            parent[x_parent] = y_parent;
            rank[y_parent]++;
        }
    }

    bool equationsPossible(vector<string>& equations) {
        parent.resize(26);
        rank.resize(26, 0);

        // Initialize parent array
        for (int i = 0; i < 26; i++) {
            parent[i] = i;
        }

        // Union for all equalities
        for (string &s : equations) {
            if (s[1] == '=') {
                Union(s[0] - 'a', s[3] - 'a');  // Convert chars to indices
            }
        }

        // Check inequality cases
        for (string &s : equations) {
            if (s[1] == '!') {
                int parent_first = find(s[0] - 'a');
                int parent_second = find(s[3] - 'a');
                
                // If they are in the same set but not equal, return false
                if (parent_first == parent_second)
                    return false;
            }
        }

        return true; // If no conflicts found
    }
};