class Solution {
public:
    int arrangeCoins(int n) {
        int i =1;
        int c = 0;
        while(true){
            n-= i;
            if(n < 0)
                break;
            
            c++;
            i++;
        }
        return c;
    }
};