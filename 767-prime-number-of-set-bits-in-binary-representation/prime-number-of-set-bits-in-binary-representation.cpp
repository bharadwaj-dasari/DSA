class Solution {
public:
    bool hasPrimeSetBits(int n){
        int c = 0;
        while(n>0){
            if(n%2 == 1)c++;
            n /= 2;
        }
        if(c == 2 || c == 3 || c == 5 || c == 7 || c == 11 || c == 13 || c == 17 ||c == 19){
            return true;
        }else{
            return false;
        } 
    }

    int countPrimeSetBits(int left, int right) {
        int count  = 0;
        for(int i = left;i<=right;i++){
            if(hasPrimeSetBits(i))count++;
        }
        return count;
    }
};