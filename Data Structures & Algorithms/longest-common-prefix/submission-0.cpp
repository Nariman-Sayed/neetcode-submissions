class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for (short i = 0; i<strs[0].size();i++){
            char x = strs[0][i];
            for(short j =0;j<strs.size();j++){
                if(x!=strs[j][i])
                return ans;
            }
            ans += x;
        }
        return ans;
    }
};