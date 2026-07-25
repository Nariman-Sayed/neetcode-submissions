class Solution {
public:
    bool isPerfectSquare(int num) {
         if (num == 1)
            return true;
        int left = 0;
        int right = num-1;
        while(left<=right){
            long long mid = (left+right)/2;
            if (mid*mid == num)
            return true;
            if(mid*mid > num){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return false;
    }
};