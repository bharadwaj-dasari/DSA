class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> r;
        for(string o:operations){
            if(o == "+"){
                int sum = r[r.size()-1]+r[r.size()-2];
                r.push_back(sum);
            }else if(o == "D"){
                int dou = r[r.size()-1]*2;
                r.push_back(dou);
            }else if(o == "C"){
                r.pop_back();
            }
            else{
                r.push_back(stoi(o));
            }
        }
        int result = 0;
        for(int x:r){
            result += x;
        }
        return result;
    }
};