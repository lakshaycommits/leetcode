class Solution {
public:
    vector<int> getR(vector<int> nums) {
        stack<int> st;
        int n = nums.size();
        vector<int> ans;
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && nums[st.top()] >= nums[i])
                st.pop();
            
            if(st.empty()) ans.push_back(n);
            else ans.push_back(st.top());
            st.push(i);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    vector<int> getL(vector<int> nums) {
        stack<int> st;
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            while(!st.empty() && nums[st.top()] >= nums[i])
                st.pop();
            
            if(st.empty()) ans.push_back(-1);
            else ans.push_back(st.top());
            st.push(i);
        }
        return ans;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix[0].size();
        vector<int> nums(n, 0);
        int ans = 0;
        
        for(auto &v: matrix) {
            for(int i = 0; i < v.size(); i++) {
                if(v[i] == '0')
                    nums[i] = 0;
                if(v[i] == '1')
                    nums[i] += 1;
            }
            vector<int> l = getL(nums), r = getR(nums);
            for(int i = 0; i < n; i++) {
                int diff = abs(r[i] - l[i]) - 1;
                ans = max(ans, nums[i] * diff);
            }
        }
        return ans;
    }
};