class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a,b;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int sum=nums[i]+nums[j];
                if(sum==target)
                {
                     a=i;
                     b=j;
                     break;
                    
                }
            }
        }
        vector<int> ans(2);
        ans[0]=a;
        ans[1]=b;

        return ans;
    }
};