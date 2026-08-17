class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    stack<pair<int,int>> st;
    vector<int> ans(temperatures.size());
for(int i = 0;i<temperatures.size();i++){    while(!st.empty()&&temperatures[i]>st.top().second)    {
 int prev = st.top().first;
 ans [prev] = i -prev;
 st.pop();
    }
    st.push({i,temperatures[i]});
}
return ans;
}
};
