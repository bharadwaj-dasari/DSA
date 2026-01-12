class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        for(auto x:freq){
            if(x.second == 1)return x.first;
        }
        return 0;
    }
};