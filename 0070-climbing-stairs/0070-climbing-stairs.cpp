class Solution {
public:
    int t[46];
    
    int solve(int n){
        if(n < 0) return 0;
        
        if(t[n] != -1) // do not need to do recursion give it back 
            return t[n];
        
        if( n == 0) return 1;  // we got one way to cover all stairs 
        
        int one_step = solve(n-1);
        int two_step = solve(n-2);
        
        return t[n] = one_step + two_step;
        
    }
    int climbStairs(int n) {
        memset(t, -1, sizeof(t));
        return solve(n);
        
    }
};