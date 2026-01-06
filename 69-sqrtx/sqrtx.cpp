class Solution {
public:
    int mySqrt(int x) {
        if( x == 0)return 0;
        if( x == 1)return 1;
        int l = 1,r = x;   
        while(l<=r){
            int m = l+(r-l)/2;
            long long s = (long long)m*m ;
            if(s== x){
                return m;
            }else if(s > x){
                r = m-1;
            }else{
                l = m+1;
            }
        }
        return r;
    }
};