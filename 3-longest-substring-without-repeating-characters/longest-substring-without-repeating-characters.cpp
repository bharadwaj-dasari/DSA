class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int left = 0;
        int maxLength = 0;

        for(int right = 0;right<s.length();++right){
            //shrink case
            while(charSet.find(s[right]) != charSet.end()){
                charSet.erase(s[left]);
                left++;
            }
            //push
            charSet.insert(s[right]);

            int currLength = right-left+1;
            maxLength = max(maxLength,currLength);
        }
        return maxLength;
    }
};