class Solution {
public:
    bool isPalindrome(string word){
        int i = 0,j = word.length()-1;
        bool res = true;
            while(i<j){
                if(word[i] == word[j]){
                    i++;
                    j--;
                }else{
                    return false;
                }
            }
            return res;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto &word:words){
            if(isPalindrome(word)){
                return word;
            }
        }
        return {};
    }
};