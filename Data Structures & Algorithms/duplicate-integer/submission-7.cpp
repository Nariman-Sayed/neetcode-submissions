class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,bool> mp;
        for(int i=0;i<nums.size();i++){
            if (mp[nums[i]]==true)
                return true;
            else
                mp[nums[i]] = true;
        }
        return false;
    }
};