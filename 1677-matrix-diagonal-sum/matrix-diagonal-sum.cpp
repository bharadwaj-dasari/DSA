class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
            int i = 0;
            while(i<n){
                sum += mat[i][i];
                sum += mat[i][n-i-1];
                i++;
            }
            if(n%2==1)sum -=mat[n/2][n/2];
        return sum;
    }
};