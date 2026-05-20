class Solution {
public:
    int fib(int n) {
        static int count = 0;
        if(n == 0){
            return 0;
        }
        else if( n == 1){
            return 1;
        }else{
            count = fib(n-1)+fib(n-2);  
        }
        return count;
    }
};