 
#include <iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
         map<int,bool> HasDuplicateMap;
         for(int i=0;i<nums.size();i++){
          if(HasDuplicateMap[nums[i]]){
              return true;
          }
          HasDuplicateMap[nums[i]]=true;
         }
         return false;
    }
};
 