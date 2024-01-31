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
    while(t--){
      int n, m;
      cin>>n>>m;
      unordered_set<long long> set;
      for(int i = 0; i < m; i++) {
        long long first, second;
        cin>>first>>second;
        set.insert(second);
      }  
      if (n - set.size() == 0) {
        cout<<1<<endl;
      }
      else {
        cout<<n-set.size()<<endl;
      }
    }
}