class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);
        int pre = 1;
        for(int i = 0;i<n;i++){
            answer[i] = pre;
            pre *= nums[i];
        }
        int suff = 1;
        for(int j = n-1;j>=0;j--){
            answer[j] *= suff;
            suff *= nums[j];
        }
        return answer;
    }
};