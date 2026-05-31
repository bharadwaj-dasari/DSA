class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long int currMass = mass;
        int count = 0;
        for(int &n:asteroids){
            if(currMass >= n)
            {
                currMass += n;
                n = 0;
            }
            else
            {
                count++;
            }
        }
        while(count>0){
            int temp = 0;
            for(int &k: asteroids){
                if(currMass >= k){
                    currMass += k;
                    k = 0;
                }
                else{
                    temp++;
                }
            }
            if(count == temp)return false;
            count = temp;
        }
        return true;
    }
};