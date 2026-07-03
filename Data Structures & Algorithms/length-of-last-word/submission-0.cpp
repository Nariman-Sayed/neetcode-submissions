class Solution {
public:
    int lengthOfLastWord(string s) {
        short len = 0;
        for (int i =s.length()-1;i>=0;i--){
            if(s[i]==' '&& len !=0)
            return len;
            else if(s[i] == ' ')
            continue;
            else
            len++;
        }
        return len;
    }
};