class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map <int,bool> ContainsDuplicate;
        for(short i =0 ; i < nums.size() ; i++){
         if(ContainsDuplicate[nums[i]]==true)
         return true;
         ContainsDuplicate[nums[i]] = true;
        }
        return false;
    }
};