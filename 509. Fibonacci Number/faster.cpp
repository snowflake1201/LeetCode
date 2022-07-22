class Solution {
public:
    vector<int> f{0, 1};
    int fib(int n) {
        while (f.size() <= n)
            f.push_back(*(f.end()-2)+ *(f.end()-1));
        return f[n];
    }
};
