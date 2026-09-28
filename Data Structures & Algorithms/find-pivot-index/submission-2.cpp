class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int RightSide = accumulate(nums.begin(),nums.end(),0);
         int LeftSide = 0;
         for(int i =0;i<nums.size();i++){
            RightSide-=nums[i];
            if(RightSide==LeftSide) return i;
            LeftSide+=nums[i];
         }
         return -1;
    }
};