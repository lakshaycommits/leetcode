class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        if(!root->left && !root->right)
            return 1;
        
        int l = INT_MAX;
        if(root->left)
            l = minDepth(root->left);
        
        int r = INT_MAX;
        if(root->right)
            r = minDepth(root->right);
        
        return min(l, r) + 1;
        
    }
};