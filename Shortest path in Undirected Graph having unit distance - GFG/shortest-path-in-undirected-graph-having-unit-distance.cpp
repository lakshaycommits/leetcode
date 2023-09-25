//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int n,int M, int src){
        map<int, vector<int>> adj;
        for(auto it: edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        queue<int> q;
        vector<int> dist(n, INT_MAX);
        q.push(src);
        dist[src] = 0;
        while(!q.empty()) {
            int cur = q.front(); q.pop();
            for(auto it: adj[cur]) {
                if(dist[cur] + 1 < dist[it]) {
                    dist[it] = dist[cur] + 1;
                    q.push(it);
                }
            }
        }
        for(int i = 0; i < n; i++)
            if(dist[i] == INT_MAX)
                dist[i] = -1;
        return dist;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends