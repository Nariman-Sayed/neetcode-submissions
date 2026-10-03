class Solution {
public:
    bool wordPattern(string pattern, string s) {
         map <char,string> Char_To_String;
         map <string,char> String_To_Char;
         vector<string> v1;
         string word;
         stringstream iss(s);
         while(iss>>word){
            v1.push_back(word);
         }
         if(v1.size()!=pattern.size()) return false;

         for(int i =0 ;i<pattern.size();i++){
            string word = v1[i];
            if(Char_To_String[pattern[i]]!=""&&Char_To_String[pattern[i]]!=word)
            return false;
            if(String_To_Char[word]!=0&&String_To_Char[word]!=pattern[i])
            return false;
            Char_To_String[pattern[i]] = word;
            String_To_Char[word] = pattern[i];
         }
         return true;
    }
};