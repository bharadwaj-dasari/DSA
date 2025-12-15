class Solution {
public:
    bool judgeCircle(string moves) {
        int h = 0;
        int v = 0;
        for(char x:moves){
            if(x == 'L'){
                h++;
            }else if(x == 'R'){
                h--;
            }else if(x == 'U'){
                v++;
            }else{
                v--;
            }
        }
        if(h == 0 && v == 0){
            return true;
        }else{
            return false;
        }
    }
};