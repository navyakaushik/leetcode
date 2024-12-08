class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        //get the number of stones
        int n = stones.size();
        
        //if there are no stones, return 0
        if(n == 0) return 0;
        
        //if there is only one stone return weight
        if(n == 1) return stones[0];
        
        //max heap to retrieve heaviest stone
        priority_queue<int, vector<int>, less<int>> pq;
        
        // add all stone weights to max heap
        for(int& wt:stones){
            pq.push(wt);
        }
        
        //process stones until empty
        while(!pq.empty()){
            
            //if one stone left return weight
            if(pq.size() == 1) return pq.top();
            
            //get heaviest stone and remove from heap
            int y = pq.top();
            pq.pop();
            
            //get second heaviest and remove from heap
            int x = pq.top();
            pq.pop();
            
            //if stones are of same weight it is destroyed
            if(x == y) continue;
            
            //if they ahve different weights caculate new weight
            int new_wt = y-x;
            
            //push new weight to heap
            pq.push(new_wt);
        }
        
        //if loop ends and no stone left return 0
        return 0;
        
    }
};