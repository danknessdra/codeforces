#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fast() {
    cin.tie(0);
    cout.tie(0);
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        long long pairs = 0;
        cin >> n;
        unordered_map<long long, long long> up, down, side, side2;

        for (int i = 0; i < n; ++i) {
            int a, b;
            cin>>a>>b;
            up[a]++;
            down[b]++;
            side[a-b]++;
            side2[a+b]++;
            
        }

        for (auto i : up) {
            pairs += i.second * (i.second - 1);
        }

        for (auto i : down) {
            pairs += i.second * (i.second - 1);
        }

        for (auto i : side) {
            pairs += i.second * (i.second - 1);
        }

        for (auto i : side2) {
            pairs += i.second * (i.second - 1);
        }

        cout<<pairs<<endl;
        
    
    }
}