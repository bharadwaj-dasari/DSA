class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> l;
        vector<int> g;
        int s = 0;
        for(int i:nums){
            if(i < pivot)l.push_back(i);
            else if(i>pivot)g.push_back(i);
            else s++;
        }
        int i = 0,j = 0,k = 0;
        while(j<l.size()){
            nums[i++] = l[j++];
        }
        while(s--){
            nums[i++] = pivot;
        }
        while(k<g.size()){
            nums[i++] = g[k++];
        }
        return nums;
    }
};