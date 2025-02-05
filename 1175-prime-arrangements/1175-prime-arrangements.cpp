class Solution {
public:
    bool isprime(int n)
    {
        if(n==1) return true;

        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return true;
        }
        return false;
    }

    long long perm(int count,int mod)
    {
        long long ans=1;
        for(int i=2;i<=count;i++)
        {
            ans=(ans*i)%mod;
        }
        return ans;

    }
    int numPrimeArrangements(int n) {
        int count=0;
        for(int i=1;i<=n;i++)
        {
            if(isprime(i)){
                count++;
            }
        }

       int mod=1e9+7;

       return (perm(count,mod)*(perm(n-count,mod)))%mod;
        
    }
};