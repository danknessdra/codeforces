#include <iostream>
#include <bits/stdc++.h>
// #include "utilities.cpp"
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define vi vector<int>
#define vpp vector<pair<int,int>>
#define vs vector<string>
#define vll vector<long long>
#define ss second
#define ff first
int row[] = {1,0,-1,0};
int col[] = {0,1,0,-1};
const int mod = 1e9 + 7;

void f(vector<int> &arr){
    int p = 0;
    int n = 0;
    for(auto i : arr) {
        if (i > 0) {
            p++;
        }
        else {
            n++;
        }
    }
    for (int i = 1; i <= p; ++i) {
        cout<<i<<" ";
    }
    for (int i = p - 1; i >= p - n; --i) {
        cout<<i<<" ";
    }
    cout<<endl;
}

void b(vector<int> &arr){
    int p = 0;
    int n = 0;
    for(auto i : arr) {
        if (i > 0) {
            p++;
        }
        else {
            n++;
        }
    }
    while (n != 0) {
        cout<<1<<" "<<0<<" ";
        n--;
        p--;
    }
    for (int i = 1; i <= p; ++i) {
        cout<<i<<" ";
    }
    cout<<endl;
    
}

void solve() {

    int n;
    cin>>n;
    vi a(n);
    forn(i,0,n) cin>>a[i];
    f(a);
    b(a);
}


signed main(){

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;

}