class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        long long r = 10e9;
        int mid = 0;
        while(l<r){
            int total = 0;
            mid = (l+r)/2;
            for(int i =0;i<piles.size();i++){
             total+=ceil((double)piles[i]/mid);
            }
             if(total<=h){
                r = mid;
             }else if(total > h){
                l = mid +1;
             }  
            }
            return r;
        }
        
    };

