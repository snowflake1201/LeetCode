class Solution {
public:
    vector<int> parent;
    int find_set(int v) {
        if(v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }
    bool union_set(int a, int b) {
        a = find_set(a);
        b = find_set(b);
        if(a == b)
            return true;
        parent[b] = a;
        return false;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size(); //邊的數量
        for(int i = 0; i <= n; i++) {
            parent.push_back(i);
        }
        
        for(vector<int> &edge : edges) {
            if(union_set(edge[0], edge[1])) 
                return {edge[0], edge[1]};
        }
        return {-1, -1};
    }
};
