class Solution {
public:
    int ans = 0;
    map<int, int> mp;
    void f(TreeNode* root) {
        if(!root)
            return;
        
        mp[root->val]++;
        
        if(!root->left && !root->right) {
            int odd = 0;
            for(auto [a, b]: mp)
                if(b % 2 == 1)
                    odd++;
            
            if(odd <= 1)
                ans++;
        }
        
        f(root->left);
        f(root->right);
        mp[root->val]--;
    }
    
    
    int pseudoPalindromicPaths (TreeNode* root) {
        f(root);
        return ans;
    }
};