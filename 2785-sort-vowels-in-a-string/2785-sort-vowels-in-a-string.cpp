class Solution {
public:
    string sortVowels(string s) {
        vector<int> lower(26,0);
        vector<int> upper(26,0);
        //counting the frequency of lower and upper
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'||s[i]=='E'|| s[i]=='O' || s[i]=='U' || s[i]=='I'){
                upper[s[i]-'A']++;
                s[i]='#';
            }
            else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                lower[s[i]-'a']++;
                s[i]='#';
            }
        }
        string vowel;
        //upper
        for(int i=0;i<26;i++){
            while(upper[i]){
            char c='A'+i;
            vowel+=c;
            upper[i]--;
            }

        }
        //lower so it will look like this vowel=AEei
        for(int i=0;i<26;i++){
            while(lower[i]){
                char c='a'+i;
                vowel+=c;
                lower[i]--;
            }
        }
        int index1=0,index2=0;
        while(index2<vowel.size()){
            if(s[index1]=='#'){
                s[index1]=vowel[index2];
                index2++;
            }
            index1++;
        }
        return s;
    }
};