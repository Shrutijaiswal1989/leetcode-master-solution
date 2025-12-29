class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int> count(n*m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int ind=grid[i][j];
                count[ind-1]++;
            }

        }
        
        vector<int> ans(2);

        for(int i=0;i<n*m;i++){
            if(count[i]>1){
                ans[0]=i+1;
            }
            else if(count[i]==0){
                ans[1]=i+1;
            }
        }
        return ans;
    }
};