import java.util.Map;
import java.util.HashMap;

class Solution {
    public String kthDistinct(String[] arr, int k) {
        //hashmap to store the frequency of each string
        Map<String, Integer> frequencyMap = new HashMap<>();
        
        //count occurances of each string in the array
        for (String element : arr){
            frequencyMap.put(element, frequencyMap.getOrDefault(element, 0) + 1);
        }
        
        //iterate over the array to find the k-th distinct string
        for(String element : arr){
            // if frequency of the string is 1 its is distinct
            if(frequencyMap.get(element) == 1){
                k--; // decrement k for each distinct string found
                
                //if k reaches zero, we found the k-th distinct string
                if( k == 0 ){
                    return element;
                }
            }
        }
        return "";
        
    }
}