class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        while(k--){
            int last=nums.back();
            nums.pop_back();
            nums.insert(nums.begin(),last);
       
        }
    }
};