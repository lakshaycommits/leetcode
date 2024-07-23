class Solution {
public:
    void solve(int opening, int closing, vector<string>& answer, string parenthesis) {
        if(opening == 0 and closing == 0) {
            answer.push_back(parenthesis);
            return;
        }
        
        if(opening == closing)
            solve(opening - 1, closing, answer, parenthesis + "(");
        else if(opening == 0)
            solve(opening, closing - 1, answer, parenthesis + ")");
        else if(closing == 0)
            solve(opening - 1, closing, answer, parenthesis + "(");
        else {
            solve(opening - 1, closing, answer, parenthesis + "(");
            solve(opening, closing - 1, answer, parenthesis + ")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> answer;
        solve(n, n, answer, "");
        return answer;
    }
};