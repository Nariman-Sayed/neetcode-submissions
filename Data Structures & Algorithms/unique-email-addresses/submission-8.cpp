class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> stUniqueEmail;
        for(int i =0;i<emails.size();i++){
            string clean_email = "";
            string email = emails[i];
            for(int j = 0;j<email.size();j++){
                if(email[j]=='.')
                continue;
                if(email[j]=='@'||email[j]=='+')
                    break;
                    clean_email+=email[j];
            }
            clean_email +=email.substr(email.find('@'),email.size()-1);
            stUniqueEmail.insert(clean_email);
        }
       return stUniqueEmail.size();
    }
};