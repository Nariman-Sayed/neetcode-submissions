class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int sum = 0;
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            int st = i+1;
            int end = nums.size()-1;
           int num1 = nums[i];
            if(i>0 && nums[i]==nums[i-1])
            continue;
            while(st<end){
            sum = num1+nums[st]+nums[end];
             if (sum ==0){
                res.push_back({num1,nums[st],nums[end]});
                st++;
                end--;
             while(st<end &&nums[st]==nums[st-1]){
            st++;
        }
        while(st<end &&nums[end]==nums[end+1]){
            end--;
        }
             }
             else if(sum>0){
                end--;
             } else if(sum<0){
                st++;
             }
        }
    }
    return res;
    }
};
