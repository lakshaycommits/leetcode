class Solution {
public:
    void preOrder(TreeNode* root, vector<int>& ans) {
        if(!root)
            return;
        if(!root->left && !root->right)
            ans.push_back(root->val);
        preOrder(root->left, ans);
        preOrder(root->right, ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2;
        preOrder(root1, v1);
        preOrder(root2, v2);
        return (v1 == v2);
    }
};