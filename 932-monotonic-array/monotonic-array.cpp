class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increment = true;
        bool decrement = true;
        for(int i = 1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                decrement = false;
            }else if(nums[i]<nums[i-1]){
                increment = false;
            }
            if(!increment && !decrement ){
                return false;
                break;
            }
        }
        return true;
    }
};