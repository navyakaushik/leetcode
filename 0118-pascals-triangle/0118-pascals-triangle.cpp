class Solution {
public:
    vector<int> generateRow(int rowIndex) {
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);  // The first element is always 1
        for(int col = 1; col < rowIndex; col++) {
            ans = ans * (rowIndex - col);
            ans = ans / col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++) {
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};
