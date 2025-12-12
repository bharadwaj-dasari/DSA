class Solution {
public:
    int arraySign(vector<int>& nums) {
        int result = 1;
        for(int x:nums){
            if(x<0){
                result *= -1;
            }else if(x == 0){
                result = 0;
                break;
            }
        }
        return result;
    }
};