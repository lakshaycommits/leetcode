class Solution {
public:
    int strStr(string p, string q) {
        int n = p.size(), m = q.size();
        if(n < m)
            return -1;
        
        for(int i = 0; i < n; i++) {
            if(p[i] == q[0]) {
                bool f = true;
                for(int j = 0; j < m; j++) {
                    if(p[i + j] != q[j]) {
                        f = false;
                        break;
                    }
                }
                if(f)
                    return i;
            }
        }
        return -1;
    }
};