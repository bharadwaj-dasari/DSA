class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int l = 0,r = 0;
        for(int num:nums){
            r += num;
        }
        vector<int> a;
        for(int num:nums){
            r -= num;
            a.push_back(abs(r-l));
            l += num;
        }
        return a;
    }
};