class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int k) {
        int start=0,end=0,mid,ans;
        int n=piles.size();
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=piles[i];
            end=max(end,piles[i]);
        }
        start=sum/k;
        if(!start)
            {
                start=1;
            }

        while(start<=end)
        {
            mid=start+(end-start)/2;
            int total=0;

            for(int i=0;i<n;i++)
            {
                total+=piles[i]/mid;
                if(piles[i]%mid)
                {
                    total++;
                }

            }
            if(total>k)
            {
                start=mid+1;
            }
            else{
               ans=mid; 
               end=mid-1;
            }
        }
        return ans;
    }
};