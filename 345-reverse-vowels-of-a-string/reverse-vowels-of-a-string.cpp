class Solution {
public:
    string reverseVowels(string s) {
        vector<int> pos;
        int n = s.length();
        for(int i = 0;i<n;i++){
            if(s[i] == 'A'||s[i] == 'E'||s[i] == 'I'||s[i] == 'O'|| s[i]=='U' ||s[i] == 'a'||s[i] =='e'||s[i]== 'i' ||s[i] == 'o' ||s[i] == 'u' ){
                pos.push_back(i);
            }
        }
        
        int left = 0;
        int right = pos.size() - 1;
        while(left<right){
            int i = pos[left];
            int j = pos[right];
            char cache = s[i];
            s[i] = s[j];
            s[j] = cache;
            left++;
            right--;
        }

        return s;
    }
};