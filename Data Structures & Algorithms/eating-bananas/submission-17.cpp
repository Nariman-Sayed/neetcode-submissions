 class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());

        while (l < r) {
            int mid = l + (r - l) / 2;
            long long total = 0;

            for (int i = 0; i < piles.size(); i++) {
                total += ceil((double)piles[i] / mid);
            }

            if (total <= h) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }

        return l;
    }
};