class Solution {
public:
    vector<int> getRow(int rowIndex) {
      
      vector<int> result(rowIndex+1,1);

        for(int i=0;i<rowIndex;i++)
        {
            
            for(int j=i;j>=1;j--)
            {
                result[j]+=result[j-1];
                
            }
            // ans.push_back(result);
        }
        return result;
    }
};