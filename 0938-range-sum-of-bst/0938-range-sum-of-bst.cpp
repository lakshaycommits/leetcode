class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            TreeNode* node = q.front(); q.pop();
            if(node->val >= low && node->val <= high)
                sum += node->val;
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        
        return sum;
    }
};