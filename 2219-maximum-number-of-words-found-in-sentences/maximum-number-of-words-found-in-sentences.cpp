class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int m = 0;
        for(auto s: sentences){
                int t = 1;
            for(int i = 0;i < s.length();i++){
                if(s[i] == ' '){
                    t++;
                }
            }
            m = max(m,t);
        }
        return m;
    }
};