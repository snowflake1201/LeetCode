class Solution {
public:
    vector<int> diStringMatch(string s) {
        int tmp1 = s.size();
        int tmp2 = 0;
        vector<int> ans;
        for(int i = 0; i <= s.size(); i++) {
            if(s[i] == 'D') {
                ans.push_back(tmp1);
                tmp1--;
            } else {
                ans.push_back(tmp2);
                tmp2++;
            }
        }
        return ans;
    }
};
