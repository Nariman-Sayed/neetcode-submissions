class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int l = 0;
         int mx = 0;
         map <char,int> mp;
         for(int i =0;i<s.size();i++){
          while(mp[s[i]]!=0){
            mp[s[l]] = 0;
            l++;
          }
          mp[s[i]]++;
          mx = max(mx,i-l+1);
         }
         return mx;
}
};
