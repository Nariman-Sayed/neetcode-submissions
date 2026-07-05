class Solution {
public:
    bool isSubsequence(string s, string t) {
        short j = 0;
        for (short i = 0 ; i <t.length(); i ++){
          if(s[j]==t[i])
          j++;
        }
        return j==s.length();
    }
};