class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int k = flowerbed.size();
        int m = 0;
        if(k==1){
            if(flowerbed[0]==0)m++;
            return m>=n;
        }
        if(flowerbed[0] == 0 && flowerbed[1] == 0){
            flowerbed[0] = 1;
            m++; 
        }
        for(int i = 1;i<k-1;i++){
            if(flowerbed[i]==0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                flowerbed[i] = 1;
                m++;
            }
        }
        if(flowerbed[k-1] == 0 && flowerbed[k-2] == 0){
            flowerbed[k-1] = 1;
            m++;
        }
        return m>=n;
    }
};