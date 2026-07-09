class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> Majority_Element;
        for (short i = 0;i<nums.size();i++){
            Majority_Element[nums[i]]++;
        }
        for (auto iter : Majority_Element){
            if(iter.second > nums.size()/2)
            return iter.first;
        }
    }
};