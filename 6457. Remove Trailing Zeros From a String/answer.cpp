class Solution {
public:
    string removeTrailingZeros(string num) {
        int l = num.length();
        for(int i = l - 1; i >= 0; i--) {
            if(num[i] == '0') num.erase(i,1);
            else break;
        }
        return num;
    }
};
