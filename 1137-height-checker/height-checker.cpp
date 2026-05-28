class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int r = 0;
        vector<int> c = heights;
        sort(heights.begin(),heights.end());
        for(int i = 0;i<heights.size();i++){
            if(c[i] != heights[i])r++;
        }
        return r;
    }
};