class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string result;
        if((str1+str2) == (str2+str1)){
            int n = gcd(str1.length(),str2.length());
            result = str1.substr(0,n);
            return result;
        }else{
            return "";
        }

    }
};