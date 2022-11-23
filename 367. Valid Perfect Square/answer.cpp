class Solution {
public:
    bool isPerfectSquare(int num) {
        int right = num;
        int left = 1;
        while(right >= left) {
            long long int mid = left + (right - left) / 2;
            if(mid * mid > num) right = mid - 1;
            else if(mid * mid < num) left = mid + 1;
            else return true;
        }
        return false;
    }
};
