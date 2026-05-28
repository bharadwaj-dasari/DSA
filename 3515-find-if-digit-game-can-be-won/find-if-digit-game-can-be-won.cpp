class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s = 0;
        int ss = 0;
        for(int &n:nums){
            if(n<10)s += n;
            else{ss += n;}
        }
        return (ss != s);
    }
};