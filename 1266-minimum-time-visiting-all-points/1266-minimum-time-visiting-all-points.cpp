class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        int n = points.size();
        
        for(int i = 0; i < n - 1; i++) {
            int x = points[i][0], y = points[i][1];
            int tx = points[i + 1][0], ty = points[i + 1][1];
            
            while(x != tx && y != ty) {
                if(x < tx)
                    x++;
                else if(x > tx)
                    x--;
                if(y < ty)
                    y++;
                else if(y > ty)
                    y--;
                ans++;
            }
            while(x != tx) {
                if(x < tx)
                    x++;
                else if(x > tx)
                    x--;
                ans++;
            }
            while(y != ty) {
                if(y < ty)
                    y++;
                else if(y > ty)
                    y--;
                ans++;
            }
            
        }
        return ans;
    }
};