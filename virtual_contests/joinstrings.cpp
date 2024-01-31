#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false); 
}
int main()
{
    fast();
    int t;
    cin>>t;

    vector<string> arr(t + 1);
    string most_recent;
    for (int i = 1; i <= t; ++i) {
        cin>>arr[i];
    }
    for (int i = 0; i < t - 1; ++i) {
        int i1, i2;
        cin>>i1>>i2;
        most_recent = arr[i1] + arr[i2];
        arr[i1] = most_recent;
        arr[i2] = "";
    }
    cout<<most_recent<<"\n";
    
    return 0;
}
 