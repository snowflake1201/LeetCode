class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(char i : columnTitle) {
            int tmp = i - 'A' + 1;
            ans = ans * 26 + tmp;
        }
        return ans;
    }
};
