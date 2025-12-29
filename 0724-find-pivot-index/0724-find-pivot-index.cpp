class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int total=0;

        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        int prefix=0,ans=0;
        int index=-1;
        for(int i=0;i<n;i++){
            ans=total-prefix-nums[i];
            if(ans==prefix){
                index= i;
                break;
            }
            prefix+=nums[i];

        }
        return index;
    }
};