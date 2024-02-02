#include <bits/stdc++.h>

#include <iostream>

using namespace std;

void dfs1(int node, unordered_map<int, vector<int>>& adj, vector<bool>& visited,
         vector<int> top) {
    visited[node] = true;
    for (int next_node : adj[node]) {
        if (!visited[next_node]) {
            dfs1(next_node, adj, visited, top);
        }
    }
    top.push_back(node);
}

void dfs2(int node, unordered_map<int, vector<int>>& adj,
         vector<bool>& visited) {
    visited[node] = true;
    for (int next_node : adj[node]) {
        if (!visited[next_node]) {
            dfs2(next_node, adj, visited);
        }
    }
}

int main() {
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        int t2 = n;
        unordered_map<int, vector<int>> adj;
        vector<bool> visited(m + 1, false);
        vector<int> top;
        while (t2--) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        for (int i = 1; i <= m; ++i) {
            if (!visited[i]) {
                dfs1(i, adj, visited, top);
            }
        }
        visited.assign(m + 1, false);
        int res = 0;
        for (int i = top.size(); i >= 0; --i) {
            if (!visited[i]) {
                dfs2(i, adj, visited);
                res += 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}