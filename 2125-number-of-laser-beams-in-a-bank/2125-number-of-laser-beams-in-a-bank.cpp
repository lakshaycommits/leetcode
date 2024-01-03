class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0, max_ = 0;
        int n = bank.size();
        
        for(int i = 0; i < n; i++) {
            string s = bank[i];
            int temp = 0;
            for(auto it: s)
                if(it == '1')
                    temp++;
            
            if(temp == 0 && max_ == 0)
                continue;
            
            if(temp > 0) {
                if(max_ != 0)
                    ans += temp * max_;
                max_ = temp;
            }
        }
        return ans;
        
    }
};