class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int t = 0;
        for(int x:apple){
            t += x;
        }
        int count = 0;
        sort(capacity.begin(),capacity.end(),greater<int>());
        for(int y:capacity){
            t -=y;
            count++;
            if(t<=0)break;
        }
        return count;
    }
};