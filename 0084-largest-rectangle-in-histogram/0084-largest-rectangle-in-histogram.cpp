class Solution {
public:
    vector<int> getR(vector<int>& height) {
        int n = height.size();
        vector<int> r(n, n);
        stack<pair<int, int>> st;
        st.push({height[n - 1], n - 1});
        for(int i = n - 2; i >= 0; i--) {
            while(!st.empty() && st.top().first >= height[i]) st.pop();
            if(!st.empty())
                r[i] = st.top().second;
            st.push({height[i], i});
        }
        return r;
    }
    vector<int> getL(vector<int>& height) {
        int n = height.size();
        vector<int> l(n, -1);
        stack<pair<int, int>> st;
        st.push({height[0], 0});
        for(int i = 1; i < n; i++) {
            while(!st.empty() && st.top().first >= height[i]) st.pop();
            if(!st.empty())
                l[i] = st.top().second;
            st.push({height[i], i});
        }
        return l;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size(), ans = -1;
        vector<int> l = getL(heights), r = getR(heights);
        
        for(auto i: l)
            cout << i << ", ";
        cout << endl;
        for(auto i: r)
            cout << i << ", ";

        for(int i = 0; i < n; i++) {
            int diff = abs(r[i] - l[i]) - 1;
            ans = max(ans, diff * heights[i]);
        }
        return ans;
    }
};