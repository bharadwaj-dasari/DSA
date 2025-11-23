class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int max_sum = 0;
        vector<int> T;
        vector<int> O;
        for(int i: nums){
            max_sum +=i;
            if(i%3 == 1){
                O.push_back(i);
            }else if(i%3 == 2){
                T.push_back(i);
            }
        }
        if(max_sum %3 == 0){
            return max_sum;
        }else{
            sort(T.begin(),T.end());
            sort(O.begin(),O.end());
            int remove = INT_MAX;
            if(max_sum%3 == 1){
                if(!O.empty())remove = min(remove,O[0]);
                if(T.size()>=2)remove = min(remove,T[0]+T[1]);
            }else{
                if(!T.empty())remove = min(remove,T[0]);
                if(O.size()>=2)remove = min(remove,O[0]+O[1]);
            }
            return max_sum-remove;
            
        }
        
        
    }
};