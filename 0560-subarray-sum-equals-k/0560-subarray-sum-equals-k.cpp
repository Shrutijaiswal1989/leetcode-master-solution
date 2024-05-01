class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int pf_sum=0;
        int cnt=0;
        mp[0]++;

        for(int i=0;i<nums.size();i++){
            pf_sum+=nums[i];
            if(mp.find(pf_sum-k)!=mp.end()){
                cnt+=mp[pf_sum-k];
            }
            mp[pf_sum]++;
        }
        return cnt;
    }
};