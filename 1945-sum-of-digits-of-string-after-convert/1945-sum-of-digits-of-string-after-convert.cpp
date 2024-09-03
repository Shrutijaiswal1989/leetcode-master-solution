class Solution {
public:
    int getLucky(string s, int k) {
        int ans= convert(s);
        for(int i=1;i<k;i++)
        {
            ans= sumofdigits(ans);
        }
        return ans;
        
    }
    int convert(string s)
    {
        int sum=0;
        for(char c:s)
        {
            int value= c-'a' +1;
            sum += value<10 ? value : (value%10 + value/10);
        }
        return sum;
    }
    int sumofdigits(int num)
    {
        int digitsum=0;
        while(num>0)
        {
            digitsum += num%10;
            num /= 10;
        }
        return digitsum;

    }
};