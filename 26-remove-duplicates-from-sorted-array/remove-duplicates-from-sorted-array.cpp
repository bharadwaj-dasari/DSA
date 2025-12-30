class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int c = nums[0];
        vector<int> a;
        a.push_back(nums[0]);
        for(int i = 1;i<n;i++){
            if(nums[i] != c){
                a.push_back(nums[i]);
                c = nums[i];
            }
        }
        nums = a;
        return a.size();
    }
};