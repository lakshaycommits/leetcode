class Solution {
public:
    bool is_bipartite(int node, vector<vector<int>>& graph, vector<int>& colors) {
        for(auto& it: graph[node]) {
            if(colors[it] == -1) {
                colors[it] = 1 - colors[node];
                if(!is_bipartite(it, graph, colors))
                    return false;
            }
            else if(colors[it] == colors[node])
                return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> colors(n, -1);
        for(int i = 0; i < n; i++) {
            if(colors[i] == -1) {
                colors[i] = 0;
                if(!is_bipartite(i, graph, colors))
                    return false;
            }
        }
        return true;
    }
};