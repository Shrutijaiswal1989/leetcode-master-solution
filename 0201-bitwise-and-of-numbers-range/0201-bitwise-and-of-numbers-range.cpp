class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int n=left & right;
         if(left==0 || right==0)
         {
            return 0;
         }
        return n-1;
    }
};