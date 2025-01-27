class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> ans(nums.begin(),nums.end());
        vector<int> res(ans.begin(),ans.end());
        if(res.size()<3)
        {
            return res[res.size()-1];
        }
        return res[res.size()-3];
    }
};