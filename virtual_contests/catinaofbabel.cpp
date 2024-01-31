#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void dfs1(unordered_map<string, pair<int, vector<string>>>& m, unordered_set<string>& visited, stack<string>& stack, string cur) {
    if (visited.count(cur) > 0) {
        return;
    }
    visited.insert(cur);
    for (auto next : m[cur].second) {
        dfs1(m, visited, stack, next);
    }
    stack.push(cur);
}

void dfs2(unordered_map<string, pair<int, vector<string>>>& m, unordered_set<string>& visited, vector<string>& complete, string cur) {
    if (visited.count(cur) > 0) {
        return;
    }
    visited.insert(cur);
    complete.push_back(cur);
    for (auto next : m[cur].second) {
        dfs2(m, visited, complete, next);
    }
}
int main() {
    int n;
    cin >> n;
    unordered_set<string> visited;
    unordered_set<string> langs;
    unordered_map<string, pair<int, vector<string>>> m1;
    unordered_map<string, pair<int, vector<string>>> m2;
    int best = 0;

    for (int i = 0; i < n; ++i) {
        string name, lang, s;
        cin>> name>> lang;
        langs.insert(lang);

        m1[lang].first++;
        m2[lang].first++;

        while(cin.peek() != '\n') {
            cin >> s;
            m1[lang].second.push_back(s);
            m2[s].second.push_back(lang);
        }
    }
    stack<string> stack;
    unordered_set<string> vis;
    for (auto i : langs) {
        if (visited.count(i) > 0) {
            continue;
        }
        dfs1(m1, visited, stack, i);
    }
    visited.clear();
    while (stack.size() != 0) {
        string curNode = stack.top();
        vector<string> complete;
        stack.pop();
        dfs2(m2, visited, complete, curNode);
        int here = 0;
        for (string i : complete) {
            here += m1[i].first;
        }
        best = max(here, best);
    }
    cout<<n - best<<endl;
}