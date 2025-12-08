class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())return false;
        unordered_map<char,int> f;
        for(char x:s){
            f[x]++;
        }
        for(char y:t){
            f[y]--;
        }
        for(auto z:f){
            if(z.second > 0){
                return false;
                break;
            }
        }
        return true;
    }
};