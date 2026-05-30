class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       if(s == "")return 0;
       int l = 0,res = 1;
       vector<int> indices(256,-1);
       for(int r = 0;r < s.length();r++){
            if(indices[s[r]] >= l){
                l = indices[s[r]] + 1;
            }
            indices[s[r]] = r;
            res = max(res,r-l+1);
       }
       return res;
    }
};