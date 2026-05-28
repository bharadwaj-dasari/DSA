class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = 0;
        for(auto &row:accounts){
            int c = 0;
            for(auto &m:row){
                c += m;
            }
            if(c>res)res = c;
        }
        return res;
    }
};