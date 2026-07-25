class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
       map<char,char> mp;
       mp[')']='(';
       mp['}']='{';
       mp[']']='[';
       for(int i =0;i<s.length();i++){
               if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
               }
                else if(st.empty()){
                    return false;
                }
               else if(mp[s[i]]==st.top()){
                st.pop();
               }else{
                return false;
               }
       } 
       if(st.empty())
       return true;
       return false;
    }
};
