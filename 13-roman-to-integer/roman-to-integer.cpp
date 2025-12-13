class Solution {
public:
    int romanToInt(string s) {
        int result = 0;

        for(int i = 0;i<s.length();i++){
            int v = values(s[i]);
            if(i+1<s.length() && values(s[i]) < values(s[i+1])){
                result -= v;
            }else{
                result += v;
            }
        }
        return result;
    }
    int values(char c){
        switch(c){
            case 'I':return 1;
            case 'V':return 5;
            case 'X':return 10;
            case 'L':return 50;
            case 'C':return 100;
            case 'D':return 500;
            case 'M':return 1000;

        }
        return 0;
    }
};