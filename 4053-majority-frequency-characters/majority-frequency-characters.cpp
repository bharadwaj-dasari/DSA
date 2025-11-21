class Solution {
public:
    string majorityFrequencyGroup(string s) {
        int n = s.length();
        string result;
        unordered_map<char,int> freq;
        map<int,int> count;
        for(char c:s){
            freq[c]++;
        }
        for(auto p:freq){
            count[p.second]++;
        }
        int k = 0,max_count = -1;
        for(auto l:count){
            if(l.second>=max_count){
                max_count = l.second;
                k = l.first;
            }
        }
        for(auto q:freq){
            if(q.second == k){
                result.push_back(q.first);
            }
        }
        return result;
    }
};