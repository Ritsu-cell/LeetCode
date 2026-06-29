class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int asteroid : asteroids) {
            bool destroyed = false;

            while (!st.empty() && asteroid < 0 && st.top() > 0) {
                if (st.top() < -asteroid) {
                    st.pop();               // Right-moving asteroid explodes
                    continue;
                }
                else if (st.top() == -asteroid) {
                    st.pop();               // Both explode
                    destroyed = true;
                    break;
                }
                else {
                    destroyed = true;       // Current asteroid explodes
                    break;
                }
            }

            if (!destroyed) {
                st.push(asteroid);
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