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
    int t; 
    cin>>t;
    while(t--) {
        int n, x, p;
        cin>>n>>x>>p;
        bool found = false;
        int len = min(p, 2 * n);
        for (long long i = 1; i <= len; ++i) {
            if (((i * (i + 1) / 2) + x) % n == 0) {
                cout<<"yes"<<endl;
                found = true;
                break;
            }
            
        }
        if (!found) {
            cout<<"no"<<endl;
        }
    }
}