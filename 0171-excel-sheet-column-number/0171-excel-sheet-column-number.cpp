class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result=0;
        for(char c:columnTitle)
        {
            // int r=(int)c;
            result=result*26+(c-'A'+1);
        }
        return result;
    }
};