class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();
        int counter = 0;
        for (auto value:s){
            if (value == '1'){
                counter++;
            }

        }
        s = string(n,'0');
        if (counter == 0){
            return s;

        }
        else{
            s[n-1] = '1';
            counter--;
            for (int i = 0 ; i < counter; i++){
                s[i] = '1';
            }
        }
        return s;
    }
};