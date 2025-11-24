class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> answer;
        int v = 0;
        for(int i:nums){
           v = (v*2+i)%5;
           answer.push_back(v == 0);
        }
        return answer;
    }
};