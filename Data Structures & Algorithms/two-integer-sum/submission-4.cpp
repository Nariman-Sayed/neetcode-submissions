class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> VTwoSum;
       unordered_map <int,int> Contains_Two_Sum;
        for(int i =0;i<nums.size();i++){
             if(Contains_Two_Sum.find(target-nums[i])!=Contains_Two_Sum.end()){
            VTwoSum.push_back(Contains_Two_Sum[target-nums[i]]);
            VTwoSum.push_back(i);
            return VTwoSum;
             }
             Contains_Two_Sum[nums[i]]=i;
        }
       return VTwoSum;
    }
};
