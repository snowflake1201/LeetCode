/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int right = n;
        int left = 1;
        int mid = left + (right - left) / 2;
        int tmp = guess(mid);
        if(guess(right) == 0) return right;
        if(guess(left) == 0) return left;
        while(tmp != 0) {
            if(tmp < 0) right = mid;
            else if(tmp > 0) left = mid;
            mid = left + (right - left) / 2;
            tmp = guess(mid);
        }
        return mid;
    }
};
