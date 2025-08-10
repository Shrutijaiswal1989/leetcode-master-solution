class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ct1=0, ct2=0;;
        int ch1=INT_MIN;
        int ch2=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(ct1==0 && ch2!=nums[i]){
                ct1=1; 
                ch1=nums[i];
            }
            else if( ct2==0 && ch1!=nums[i]){
                ct2=1;
                ch2=nums[i];
            }
            else if(nums[i]==ch1){
                ct1++;
            }
            else if(nums[i]==ch2){
                ct2++;
            }
            else {
            ct1--;
            ct2--;
            }
        }
        vector<int> ls;
         ct1=0, ct2=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==ch1){
                ct1++;
            }else if(nums[i]==ch2){
                ct2++;
            }

        }
        int mini=nums.size()/3 ;

        if(ct1>mini) {
            ls.push_back(ch1);
        }
         if(ct2>mini) ls.push_back(ch2);
        sort(ls.begin(), ls.end());
        return ls;
        
    }
};