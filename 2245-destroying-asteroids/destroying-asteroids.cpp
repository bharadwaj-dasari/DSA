class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long int currMass = mass;
        for(int n:asteroids){
            if(currMass >= n)currMass += n;
            else{return false;}
        }
        return true;
    }
};