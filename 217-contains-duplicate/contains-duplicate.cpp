class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> ans;
        bool anss = false;
        for(int a : nums){
            ans[a]++;
        }
        for(auto b : ans){
            if (b.second>=2){
                anss = true;
                break;
            }
            
        }
        return anss;
    }
};