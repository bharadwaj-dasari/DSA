class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.empty()) return {};
        vector<string> r;
        int l = nums[0];
        int h = nums[0];
        for(int i = 1;i<nums.size();i++){
            if(nums[i] == h+1){
                h++;
            }else{
                if(l == h){
                    r.push_back(to_string(l));
                }else{
                    r.push_back(to_string(l)+"->"+to_string(h));
                }
                l = h = nums[i];
            }
        }
        if(l == h){
            r.push_back(to_string(l));
        }else{
            r.push_back(to_string(l)+"->"+to_string(h));
        }
        return r;
    }
};