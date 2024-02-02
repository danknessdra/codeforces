#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int> arr(n + 1, 0);
    vector<int> input;
    unordered_map<int, int> map;

    int num = 1;
    for (int i = 0; i < n; ++i) {
        int cur;
        cin>>cur;
        input.push_back(cur);
        if (map.count(cur) == 0) {
            map[cur] = num;
            num++;
        }
        arr[cur]++;
    }
    for (int i = 0; i < n + 1; ++i) {
        if (arr[i] != 0 && arr[arr[i]] != n - arr[i]) {
            cout<<"Impossible"<<endl;
            return 0;
        }
    }
    cout<<"Possible"<<endl;
    for (int i = 0; i < input.size(); ++i) {
        cout<<map[input[i]]<<" ";
    }
    cout<<endl;
}