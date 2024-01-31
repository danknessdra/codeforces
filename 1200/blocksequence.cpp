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

int f(int i, vector<int> &a, vector<int> &dp){

    for (i = a.size() - 1; i >= 0; i--) {
        if (a[i] + i > a.size() - 1) {
            dp[i] = dp[i+1] + 1;
        }
        else {
            dp[i] = min(dp[i+1] + 1, dp[i + a[i] + 1]);
        }
    }
    return dp[0];
}

void solve() {

    int n;
    cin>>n;
    vi a(n);
    forn(i,0,n) cin>>a[i];
    vector<int> dp(n+1, 0);
    cout<<f(0, a, dp)<<'\n';
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