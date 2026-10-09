class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        unordered_map <char,int> mp1;
        unordered_map <char,int> mp2;

        for(int i = 0;i<s.length();i++){
            mp1[s[i]]++;
        }
        for(int j = 0;j<t.length();j++){
            mp2[t[j]]++;
        }
         
         return (mp1 == mp2);
        

    }
};
