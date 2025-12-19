class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int result = 0;
        for(const auto& row : accounts){
            int cache = 0;
            for(const auto& elements : row){
                cache += elements;
            }
            if(cache > result)result = cache;
        }
        return result;
    }
};