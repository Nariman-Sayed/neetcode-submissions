class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp1;
        map<char,char> mp2;
        for(short i = 0;i<s.length();i++){
            if(mp1[s[i]]&&mp1[s[i]]!=t[i]||mp2[t[i]]&&mp2[t[i]]!=s[i])
            return false;
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }
        return true;
    }
};