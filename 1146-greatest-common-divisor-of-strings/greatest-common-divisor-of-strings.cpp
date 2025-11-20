class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if((str1+str2) != (str2+str1)){
            return "";
        }else{
            int m = str1.length();
            int n = str2.length();
            int l = gcd(m,n);
            string result;
            for(int i = 0;i<l;i++){
                result.push_back(str1[i]);
            }
            return result;
        }
    }
};