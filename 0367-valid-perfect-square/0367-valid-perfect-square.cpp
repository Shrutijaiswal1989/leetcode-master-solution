class Solution {
public:
    bool isPerfectSquare(int num) {
        int ans,start=0,end=num;
        double mid;

        if(num==1)
        {
            return true;
        }

        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(mid==num/mid)
            {
                return true;
            }
            else if(mid < num/mid)
            {
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};