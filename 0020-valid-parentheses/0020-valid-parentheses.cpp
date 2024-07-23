class Solution {
public:
    bool isOpeningBracket(char c) {
        return (c == '(' || c == '[' || c == '{');
    }
    bool areBracketsMatching(char a, char b) {
        return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
    }
    bool isValid(string s) {
        stack<char> st;
        for(auto c: s) {
            if(isOpeningBracket(c))
                st.push(c);
            else if(!st.empty() and areBracketsMatching(st.top(), c))
                    st.pop();
            else
                return false;
        }
        return st.empty();
    }
};