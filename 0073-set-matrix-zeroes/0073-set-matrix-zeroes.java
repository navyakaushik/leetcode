class Solution {
    public void setZeroes(int[][] matrix) {
        int n = matrix.length; //number of rows 
        int m = matrix[0].length; // number of columns
        
        boolean[] row = new boolean[n]; // row marker
        boolean[] col = new boolean[m];
        
        //traverse thr matrix to mark the rows and columns that contain zero
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    row[i] = true;
                    col[j] = true;
                }
            }
        }
        
        // set entire rows and columns to zero based on the markers
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(row[i] || col[j]){
                    matrix[i][j] = 0;
                }
            }
        }
        
    }
}