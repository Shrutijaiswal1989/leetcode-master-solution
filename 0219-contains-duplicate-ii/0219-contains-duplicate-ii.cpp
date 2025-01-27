class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0;i<nums.size()-1;i++)
        {
                if(nums.size()>=INT_MAX)
                {
                    return 0;
                }
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j] && abs(i-j)<=k && i!=j)
                {
                    return true;
                }
            }

        }
        return false;
    }
};