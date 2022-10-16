class Solution {
public:
    int maximum69Number (int num) {
        for(int i = 10000; i > 0; i /= 10) {
            int tmp = num / i;
            if(tmp) {
                if(tmp % 10 == 6) {
                    return num + 3 * i;
                }
            }
        }
        return num;
    }
};
