class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result="";

        while(columnNumber>0)
        {
            columnNumber--;
            char c='A'+(columnNumber%26);
            columnNumber/=26;
            result=c+result;
        }
        return result;
    }
};