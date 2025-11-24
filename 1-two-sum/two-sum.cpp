class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> answer;
        for(int i = 1;i<n;i++){
            for(int j = 0;j<i;j++){
                if(nums[i]+nums[j] == target){
                    answer.push_back(i);
                    answer.push_back(j);
                    break;
                }
            }
        }
        return answer;
    }
};