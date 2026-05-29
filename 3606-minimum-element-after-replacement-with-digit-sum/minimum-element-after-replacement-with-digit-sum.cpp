class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int &n:nums){
            int s = 0;
            while(n>0){
                s += n%10;
                n /= 10;
            }
            n = s;
        }
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};