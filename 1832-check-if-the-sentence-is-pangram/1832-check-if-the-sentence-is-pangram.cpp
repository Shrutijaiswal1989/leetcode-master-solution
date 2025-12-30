class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> alpha(26,0);
        int index=0;
        while(index<sentence.size()){
            int pos=sentence[index]-'a';
            alpha[pos]=1;
            index++;
        }
        for(int i=0;i<alpha.size();i++){
            if(alpha[i]==0){
                return false;
            }

        }
        return true;
    }
};