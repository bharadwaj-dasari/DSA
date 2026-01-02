class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        int s = nums.size();
        for(auto y:freq){
            if(y.second*2 == s){
                return y.first;
                break;
            }
        }
        return 0;
    }
};