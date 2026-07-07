class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> stUnique_email_address;
        for(short i = 0; i<emails.size(); i++){
            string clean_email = "";
            string email = emails[i];
            for(short j =0; j<email.size();j++ ){
                if (email[j]=='.')
                continue;
                if(email[j]=='@'||email[j]=='+')
                break;
                clean_email +=email[j];
            }
            clean_email +=email.substr(email.find('@'),email.size()-1);
            stUnique_email_address.insert(clean_email);
        }
        return stUnique_email_address.size();
    }
};