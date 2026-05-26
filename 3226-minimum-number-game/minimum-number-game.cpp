class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();
        if(n == 0 || n%2 != 0)return {0};
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n;i=i+2){
            swap(nums[i],nums[i+1]); 
        }
        return nums;
    }
};