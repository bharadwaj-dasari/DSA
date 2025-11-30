class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> r;
        while(ss>>word)r.push_back(word);
        reverse(r.begin(),r.end());
        string ans;
        for(int i=0;i<r.size();i++){
            if(i) ans += ' ';
            ans +=r[i];
        }
        return ans;
    }
};