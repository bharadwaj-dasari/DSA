class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1)return true;
        bool ans = false;
        for(long int i = 2;i<num;i++){
            if(i*i == num){
                ans = true;
                break;
            }
        }
        return ans;
    }
};