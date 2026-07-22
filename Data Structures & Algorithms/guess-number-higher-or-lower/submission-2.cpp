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
        int l =1;
        int r =n;
        long long res = 0;
        while(l<=r){
            long long mid = (l+r)/2;
            res = guess(mid);
            if(res==-1){
                r = mid-1;
            }else if(res==1){
                l = mid+1;
            }else{
                res = mid;
                break;
            }
        }
        return res;
    }
};