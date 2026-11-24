class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length())
        return false;

        map<char,int> mp1;
        map<char,int> mp2;

        for(int i = 0;i<s1.length();i++){
            mp1[s1[i]]++;
            mp2[s2[i]]++;
        }
       int l = 0;
        for(int r = s1.length();r<s2.length();r++){
            if(mp1==mp2)
            return true;
             mp2[s2[r]]++;
             mp2[s2[l]]--;
             if(mp2[s2[l]]==0)
             mp2.erase(s2[l]);
             l++;
        }
        return mp1==mp2;
    }
};
