class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int max = candies[0];
        vector<bool> result;
        for(int i = 1;i<n;i++){
            if(candies[i]>max){
                max = candies[i];
            }
        }
        for(int j = 0;j < n;j++){
            int after = candies[j]+extraCandies;
            if(after < max){
                result.push_back(false);
                }else{
                    result.push_back(true);
                }
        }
        return result;
    }
};