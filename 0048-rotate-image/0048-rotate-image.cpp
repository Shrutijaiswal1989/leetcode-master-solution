class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        //transpose
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<m;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //rowwise reverse
        for(int i=0;i<n;i++){
            int start=0;
            int end=m-1;
            while(start<end){
                swap(matrix[i][start],matrix[i][end]);
                start++;
                end--;

            }
        }
        
    }
};