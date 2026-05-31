class Solution {
public:
    int maxArea(vector<int>& height) {
        long long int r = 0;
        int i = 0;
        int j = height.size() - 1;
        while(i < j){
            long long int t = min(height[i],height[j])*(j-i);
            r = max(r,t);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return r;
    }
};