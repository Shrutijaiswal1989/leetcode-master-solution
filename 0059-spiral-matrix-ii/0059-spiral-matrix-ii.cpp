class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        int top=0,right=n-1,bottom=n-1,left=0;
        vector<vector<int>> matrix(n,vector<int>(n));
        int val=1;
        while(top<=bottom && left<=right){
            //top
            for(int j=left;j<=right;j++){
                matrix[top][j]=val;
                val++;
            }
                top++;
            //right
            for(int i=top;i<=bottom;i++){
               matrix[i][right] = val;
                val++;
            }
                right--;
            //bottom
            if(top<=bottom){
            for(int j=right;j>=left;j--){
                 matrix[bottom][j] = val;
                val++;
            }
                bottom--;
            }
            //left
            if(left<=right){
            for(int i=bottom;i>=top;i--){
                matrix[i][left] = val;
                val++;
            }
                left++;
            
            }
        }
       

        return matrix;
        
    }
};