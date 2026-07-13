class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        unordered_set <int> NumSet(nums.begin(),nums.end());
        for(int num : NumSet){
            if(NumSet.find(num-1)==NumSet.end()){
                int length = 1;
                while(NumSet.find(num+length)!=NumSet.end()){
                    length ++;
                }
                longest =max(length,longest);
            }
        }
        return longest; 
    }
};
