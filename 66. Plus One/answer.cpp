class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;
            } 
            else {
                digits[i]++;
                return digits; // 如果不需要進位，立即返回
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
    
};
