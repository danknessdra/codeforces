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
        int n;
        cin>>n;
        for (int i  = 1; i <= 10e6; ++i) {
            if (i * (i+1)/2 ==n || i* (i+1)/2 > n+1) {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}