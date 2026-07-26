class Solution {
public:
    int calPoints(vector<string>& operations) {
         stack<int> st;
         for(int i =0;i<operations.size();i++){
            if(operations[i]=="+"){
                int v1= st.top();
                st.pop();
                int v2=st.top();
                st.pop();
                st.push(v2);
                st.push(v1);
                int sum = v1+v2;
                st.push(sum);
            }else if(operations[i]=="D"){
                int v=st.top();
                st.push(2*v);
            }else if(operations[i]=="C"){
                st.pop();
            }else{
             st.push(stoi(operations[i]));
         }
            }
    int sum = 0;
         while(!st.empty()){
           sum+=st.top();
           st.pop();
         }
         return sum;
    }
};