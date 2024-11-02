class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n = sentence.size();
        for(int i = 0; i < n; i++) {
            char current = sentence[i];
            if(i == n - 1)
                return (current == sentence[0]);

            if(current == ' ' && sentence[i + 1] != sentence[i - 1])
                return false;
        }
        return true;
    }
};