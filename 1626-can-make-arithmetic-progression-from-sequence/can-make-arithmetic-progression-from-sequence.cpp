class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int cache = arr[1]-arr[0];
        bool result = true;
        for(int i = 2;i<arr.size();i++){
            if(cache != arr[i]-arr[i-1]){
                result = false;
                break;
            }
        }
        return result;
    }
};