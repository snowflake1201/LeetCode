class Solution {
public:
    int BinarySearch(int n) {
        int x = 0; //lower bound
        int e = n; //upper bound
        long long int mid = x + (e - x) / 2; //the average number of lower bound and upper bound.
        int ans = -1;
        while(x <= e) { //if not close enough, countinue.
            long long int s = mid * mid; 
            if(s == n) return mid; //found answer.
            if(s < n) { //too small, lower bound rise.
                ans = mid;
                x = mid + 1;
            }
            else { //too big, upper bound reduce.
                e = mid - 1;
            }
            mid = x + (e - x) / 2; //new average number.
        }
        return ans;
    }
    
    int mySqrt(int x) {
        return BinarySearch(x);
    }
};
