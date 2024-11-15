class Solution {
public:
    // this function is used to determine if swap can be made where s and goal are identical if s and goal 
    // are same then swap is only possible if there is a duplicate character 
    bool checkFreq(string &s) {
        int arr[26] = {0};
        
        for(char &ch : s) {
            arr[ch - 'a']++;
            
            if(arr[ch - 'a'] > 1)
                return true;
        }
        return false;
    }
    
    

    bool buddyStrings(string s, string goal) {
        if(s.length() != goal.length())  //if length is not equal then they cant be made equal with any number of swaps
            return false;

        if(s == goal) {
            return checkFreq(s);
        }

        vector<int> index;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] != goal[i]) {
                index.push_back(i);
            }
        }

 
        if(index.size() != 2)
            return false;

        swap(s[index[0]], s[index[1]]);
        
        return s == goal;
        
        //if s and goal are same then code checks if swap is possible within duplicate characters 
        //if s and goal differ then there has to be exactly 2 mismatches to make s and goal equal
    }
};
