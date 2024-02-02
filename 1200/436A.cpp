#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    int n, x;
    vector<pair<int, int>> caramel;
    vector<pair<int,int>> fruit_drop;
    cin>>n>>x;
    for (int i = 0; i < n; ++i) {
        int t, h, m;
        cin>>t>>h>>m;
        if (t == 0) {
            caramel.push_back({h, m});
        }
        else {
            fruit_drop.push_back({h, m});
        }
    }

    sort(caramel.begin(), caramel.end());
    sort(fruit_drop.begin(), fruit_drop.end()); 

    bool c = true;

    if (fruit_drop.size() == 0) {
        c = false;
    }
    int ci = 0;
    int fi = 0;
    int res = 0;

    while (true) {
        if (c && ci < caramel.size() && caramel[ci].first < x) {
            x += caramel[ci].second;
            cout<<"test 1"<<caramel[ci].first<<" "<<caramel[ci].second<<endl;
            c = !c;
            res++;
            ci++;
        }
        else if (!c && fi < fruit_drop.size() && fruit_drop[fi].first < x) {
            x += fruit_drop[fi].second;
            cout<<"test 2"<<fruit_drop[fi].first<<" "<<fruit_drop[fi].second<<endl;
            c = !c;
            res++;
            fi++;
        }
        else {
            cout<<res<<endl;
            return 0;
        }
    }
    return 1;


    

}