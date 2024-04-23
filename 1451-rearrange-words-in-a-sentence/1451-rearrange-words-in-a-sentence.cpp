class Solution {
public:
    bool static comp(pair<string,int> &a, pair<string,int> &b){
        if(a.first.length()!=b.first.length()){
            return a.first.length()<b.first.length();
        }
        else{
            return a.second<b.second;
        }
    }
    string arrangeWords(string text) {
        string word="";
        vector<pair<string,int>> vec;
        int pos=0;
        for(auto tt:text){
            if(tt==' '){
                if(isupper(word[0])){
                    transform(word.begin(),word.end(),word.begin(), ::tolower);
                }
                vec.push_back({word,pos});
                word="";
                pos++;
            }
            else{
                word+=tt;
            }  
        }
        vec.push_back({word,pos});
        sort(vec.begin(),vec.end(),comp);
        string ans="";
        for(int i=0;i<vec.size()-1;i++){
            ans+=vec[i].first;
            ans+=" ";
        }
        ans+=vec[vec.size()-1].first;
        ans[0]=toupper(ans[0]);
        return ans;
    }
};