class Solution {
public:
    int mySqrt(int x) {
        int l = 0;
        int r = x;
        int res = 0;
        while(l<=r){
            int m = l + (r-l)/2;
            if ((long long) m*m == x)
               return m;
            else if((long long) m*m > x)
            r = m - 1;
            else{
            l = m + 1;
            res = m;
            }
        }
        return res;
    }
};