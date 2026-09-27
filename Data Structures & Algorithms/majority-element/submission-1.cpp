class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int count = 0;
         int Majority = 0;
         for(int i =0;i<nums.size();i++){
            if(count==0)
            Majority=nums[i];

            if(nums[i]==Majority){
            count++;
            }
            else{
            count--;
            }
         }
         return Majority;
    }
};