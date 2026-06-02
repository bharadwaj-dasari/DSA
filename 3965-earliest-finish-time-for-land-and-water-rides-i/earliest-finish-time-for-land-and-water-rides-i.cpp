class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n = landStartTime.size();
        int m = waterStartTime.size();
        int ans = INT_MAX;
        for(int i = 0; i < n;i++){
            for(int j = 0;j < m;j++){
                int finishLand = landStartTime[i]+landDuration[i];
                int t1 = max(finishLand,waterStartTime[j]) + waterDuration[j];

                int finishedWater = waterStartTime[j]+waterDuration[j];
                int t2 = max(finishedWater,landStartTime[i])+landDuration[i];
                ans = min(ans,min(t1,t2));
            }
        }
        return ans;
    }
};