class Solution {
public:
    int countOdds(int low, int high) {
        int n = (high-low);
        if(low%2==0 && high%2==0){
            return n/2;
        }else if(low%2==1 && high%2==1){
            return (n/2)+1;
        }else{
            return (n+1)/2;
        }
    }
};