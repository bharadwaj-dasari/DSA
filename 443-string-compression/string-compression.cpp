class Solution {
public:
    int compress(vector<char>& chars) {
        int read = 0;
        int write = 0;
        while(read < chars.size()){
            char current = chars[read];
            int count = 0;
            while(read < chars.size() && current == chars[read]){
                count++;
                read++;
            }
            chars[write++] = current;
            if(count > 1){
                string n = to_string(count);
                for(char x:n){
                    chars[write++] = x;
                }
            }
        }
        return write;
    }
};