class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int r = 0;
        int minlength = INT_MAX;
        int sum = 0;
        while(r<nums.size()){
            sum+=nums[r++];
            while(sum>=target){
                minlength = min(minlength,r-l);
                sum-=nums[l++];
            }
        }
        if (minlength == INT_MAX)
    return 0;

return minlength;
    }
};