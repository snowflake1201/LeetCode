class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> ans(n, "");
        priority_queue<pair<int, int>> q;
        
        for(int i = 0; i < n; i++) 
            q.push({score[i], i});
        
        for(int i = 1; !q.empty(); i++) {
            auto item = q.top();
            q.pop();
            if(i == 1) ans[item.second] = "Gold Medal";
            else if(i == 2) ans[item.second] = "Silver Medal";
            else if(i == 3) ans[item.second] = "Bronze Medal";
            else ans[item.second] = to_string(i);
        }
        return ans;
    }
};
