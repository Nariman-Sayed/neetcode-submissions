class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l =0;
        int r =1;
        int mx =0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
             mx = max(mx,prices[r]-prices[l]);
            }else{
                l = r;
            }
            r++;
        }
        return mx;
    }
};
