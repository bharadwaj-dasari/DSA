class Solution {
public:
    int countDigits(int num) {
        if(num/10 == 0){
            return 1;
        }
        int n = num;
        int count = 0;
        while(n >0){
            int d = n%10;
            n /= 10;
            if(num%d == 0){
                count++;
            }
        }
        return count;
    }
};