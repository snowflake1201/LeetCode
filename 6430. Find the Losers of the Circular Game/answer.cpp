class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int> fds(n);
        fds[0] = 1;
        vector<int> ans;
        int pnt = 0;
        for(int i = 1; i <= 50; i++) {
            pnt = (pnt + i * k) % n;
            fds[pnt]++;
            if(fds[pnt] > 1) break;
            //pnt = (pnt + i * k) % n;
            cout<<i<<endl;
        }
        for(int i = 0; i < n; i++) {
            if(fds[i] == 0) ans.push_back(i+1);
        }
        return ans;
    }
};
