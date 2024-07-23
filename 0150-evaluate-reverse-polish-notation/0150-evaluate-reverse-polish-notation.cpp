class Solution {
public:
    bool isOperator(string a) {
        return ((a == "+") || (a == "-") || (a == "*") || (a == "/"));
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto token: tokens) {
            if(!isOperator(token)) {
                int integer = stoi(token);
                st.push(integer);
            }
            else {
                int s = st.top();
                st.pop();
                int f = st.top();
                st.pop();
                if(token == "+")
                    st.push(f + s);
                else if(token == "-")
                    st.push(f - s);
                else if(token == "*")
                    st.push(f * s);
                else if(s == 0)
                    st.push(0);
                else
                    st.push(f / s);
            }
        }
        return st.top();
    }
};