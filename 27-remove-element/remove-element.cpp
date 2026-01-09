class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int pos = 0;
        for(int i :nums){
            if(i != val){
                nums[pos] = i;
                pos++;
            }
        }
        return pos;
    }
};