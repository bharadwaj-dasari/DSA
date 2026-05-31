class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> r;
        for(char c: s){
            if((c >= 'a' && c <= 'z') ||
               (c >= 'A' && c <= 'Z') ||
               (c >= '0' && c <= '9')){
                r.push_back(c);
            }
        }
        int n = r.size();
        if(n == 0)return true;
        for(int i = 0;i<n/2;i++){
            if(tolower(r[i]) != tolower(r[n-i-1]))return false;
        }
        return true;
    }
};