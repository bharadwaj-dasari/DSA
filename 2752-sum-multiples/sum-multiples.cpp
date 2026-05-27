class Solution {
public:
    int sumOfMultiples(int n) {
        int s = 0;
        for(int i = 0;i<=n;i=i+3){
            s += i;
        }
        for(int j = 0;j<=n;j=j+5){
            s += j;
        }
        for(int k = 0;k<=n;k=k+7){
            s += k;
        }
        for(int l = 0;l<=n;l=l+15){
            s -= l;
        }
        for(int m = 0;m<=n;m=m+21){
            s -= m;
        }
        for(int a = 0;a<=n;a=a+35){
            s -= a;
        }
        for(int b = 0;b<=n;b=b+105){
            s += b;
        }
        return s;
    }
};