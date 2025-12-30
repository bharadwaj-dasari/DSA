class Solution {
public:
    bool isPalindrome(int x) {
        string y = to_string(x);
        string z = y;
        int l = y.length();
        int m = 0,n = l - 1;
        char c;
        while(n>m){
            c = y[m];
            y[m] = y[n];
            y[n] = c;
            m++;
            n--;
        }
        if(z == y){
            return true;
        }else{
            return false;
        }

    }
};