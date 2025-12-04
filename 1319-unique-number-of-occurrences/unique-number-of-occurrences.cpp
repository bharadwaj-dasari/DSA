class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> f; 
        map<int,int> o;
        for(int x: arr)f[x]++;
        for(auto p:f)o[p.second]++;
        for(auto n:o){
            if(n.second >1){
              return false;
              break;
            }
        }
        return true;
    }
};