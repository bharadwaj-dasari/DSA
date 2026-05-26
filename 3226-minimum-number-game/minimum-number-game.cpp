class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();
        if(n == 0 || n%2 != 0)return {0};
        vector<int> res;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n;i=i+2){
            res.emplace_back(nums[i+1]);
            res.emplace_back(nums[i]);
        }
        return res;
    }
};