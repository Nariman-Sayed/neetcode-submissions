class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int i = 0; i < asteroids.size(); i++) {
            if (asteroids[i] > 0 || st.empty()) {
                st.push(asteroids[i]);
            }
            else if (asteroids[i] < 0 && !st.empty()) {
                int y = asteroids[i];

                while (!st.empty() && st.top() > 0) {
                    int x = st.top();

                    if (abs(x) < abs(y)) {
                        st.pop();
                    }
                    else
                        break;
                }

                if (st.empty() || st.top() < 0)
                    st.push(y);
                else if (abs(st.top()) == abs(y))
                    st.pop();
            }
        }

        vector<int> ans(st.size());

        for (int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};