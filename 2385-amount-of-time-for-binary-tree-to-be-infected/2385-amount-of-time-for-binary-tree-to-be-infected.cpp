class Solution {
public:
    int bfs(map<int, vector<int>>& adj, int start, int n) {
        queue<int> q;
        unordered_set<int> vis;
        q.push(start);
        vis.insert(start);
        int ans = 0;
        
        while(!q.empty()) {
            int k = q.size();
            while(k > 0) {
                int node = q.front(); q.pop();
                for(auto it: adj[node]) {
                    if(!vis.count(it)) {
                        vis.insert(it);
                        q.push(it);
                    }
                }
                k--;
            }
            ans++;
        }
        return ans - 1;
    }
    int amountOfTime(TreeNode* root, int start) {
        map<int, vector<int>> adj;
        queue<TreeNode*> q;
        q.push(root);
        int n = 0;
        while(!q.empty()) {
            TreeNode* node = q.front(); q.pop();
            n++;
            if(node->left) {
                adj[node->val].push_back(node->left->val);
                adj[node->left->val].push_back(node->val);
                q.push(node->left);
            }
            if(node->right) {
                adj[node->val].push_back(node->right->val);
                adj[node->right->val].push_back(node->val);
                q.push(node->right);
            }
        }
        
        return bfs(adj, start, n);
    }
};