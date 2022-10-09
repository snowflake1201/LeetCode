class Solution {
public:
    int balancedStringSplit(string s) {
        int tmp = 0;
        int ans = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'R') tmp++;
            else if(s[i] == 'L') tmp--;
            if(tmp == 0) ans++;
        }
        return ans;
    }
};
