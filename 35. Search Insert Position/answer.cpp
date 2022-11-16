class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = 0;
        for(ans = 0; ans < nums.size(); ans++) 
            if(nums[ans] >= target) break;
        return ans;
    }
};
