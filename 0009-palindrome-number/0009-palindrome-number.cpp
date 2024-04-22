class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        long long sum=0;
        long long t=x;
        while(t!=0)
        {
            int r=t%10;
            sum=sum*10+r;
            t=t/10;
        }
        return (sum==x);
    }
};