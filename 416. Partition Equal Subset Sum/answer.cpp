class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int target = 0;
        for(int &i : nums)
            target += i;
        if(target % 2) return false;
        target /= 2;
        
        unordered_set<int> set;
        set.insert(nums[0]);
        for(int i = 0; i < nums.size() - 1; i++) {
            unordered_set<int> tmp;
            for(int j : set) {
                tmp.insert(j);
                tmp.insert(j + nums[i + 1]);
            }
            set = tmp;
            if(set.count(target)) return true;
        }
        return false;
    }
};
