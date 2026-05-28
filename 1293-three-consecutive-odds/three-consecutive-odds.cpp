class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int c = 3;
            for(int n:arr){
                if(n%2 == 0){
                    c = 3;
                }else{
                    c--;
                    if(c == 0){
                        break;
                    }
                }
            }
        
        return (c==0);
    }
};