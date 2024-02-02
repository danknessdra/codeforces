#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
    cin.tie(0);
    cout.tie(0);
}

void dfs(stack<int>& s, unordered_map<int, vector<int>>& list, vector<bool>& visited, int cur) {
    visited[cur] = true;
    for (int i : list[cur]) {
      if (!visited[i]) {
        dfs(s, list, visited, i);
      }
    }
    s.push(cur);
}

void dfs2(unordered_map<int, vector<int>>& list, vector<bool>& visited, int cur) {
    visited[cur] = true;
    for (int i : list[cur]) {
      if (!visited[i]) {
        dfs2(list, visited, i);
      }
    }
}

int main() {
    fast();
    int t;
    cin>>t;
    while(t--){
      int n, m;
      cin>>n>>m;
      unordered_map<int, vector<int>> list;
      stack<int> stack;
      vector<bool> visited(n+1, false);
      for(int i = 0; i < m; i++) {
        int first, second;
        cin>>first>>second;
        list[first].push_back(second);
      }

      for (int i = 1; i < n + 1; ++i) {
        if (visited[i]) {
          continue;
        }
        dfs(stack, list, visited, i);

      }
      int res = 0;
      visited.assign(n + 1, false);
      while (stack.size() != 0) {
        int cur = stack.top();
        stack.pop();
        if (visited[cur]) {
          continue;
        }
        res++;
        dfs2(list, visited, cur);
        
      }
      cout<<res<<endl;
      
    }
}