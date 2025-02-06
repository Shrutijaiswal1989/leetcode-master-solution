class Solution {
public:
    int singleNumber(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        int sum=0,total=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            total+=nums[i];
            if(nums[i]==nums[i-1] && nums[i]==nums[i+1])
            {
                sum+=nums[i]*3;
            }

        }

        return total-sum;
    }
};