class Solution {
public:
    void helper(string &st, char a, char b){
        stack<char> tmp;
        for(int i = 0; i < st.length(); i++) {
            if(!tmp.empty() && st[i] == b && tmp.top() == a) {
                tmp.pop();
            }
            else {
                tmp.push(st[i]);
            }
        }
        st="";
        while(!tmp.empty()) {
            st += tmp.top();
              tmp.pop();
            }
        reverse(st.begin(),st.end());
    }
    
    int minLength(string s) {
        int cnt = s.length();
        for(int i = 0; i < cnt; i++) {
            helper(s, 'A', 'B');
            helper(s, 'C', 'D');
        }
        return s.length();
    }
};
