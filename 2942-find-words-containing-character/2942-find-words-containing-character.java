class Solution {
    public List<Integer> findWordsContaining(String[] words, char x) {
        List<Integer> result = new ArrayList<>();
     
        //fixed size - arr[]
        //dynamic size - arraylist()
        for(int i = 0; i < words.length; i++)
        {
            String word = words[i];
            for(char ch : word.toCharArray())
                if(ch==x)
            {
                result.add(i); 
                break;
            }
        }
        
        System.out.println("using for each");
        for(int y : result)
            System.out.print(y + ",");
        System.out.println();
        System.out.println("using conventional for");
        for(int i = 0; i < result.size(); i++)
            System.out.print(result.get(i) + ",");
        return result;
    }
}