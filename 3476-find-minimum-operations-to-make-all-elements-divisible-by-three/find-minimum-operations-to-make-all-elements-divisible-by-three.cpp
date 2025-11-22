class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int cache = nums[i]%3;
            if(cache == 0){
                continue;
            }
            count++;
        }
        return count;
    }
};