class Solution {
public:
    int digitSum(int n){
        int s = 0;
        while(n>0){
            s += n%10;
            n /= 10;
        }
        return s;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        for(int n:nums){
            sum += n;
            sum -= digitSum(n);
        }
        return sum;
    }
};