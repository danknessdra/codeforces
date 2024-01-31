#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fast();
    int t;
    cin>>t;
    vector<int>resA;
    while(t--)
    {
        int res = 0;
        int n;
        cin>>n;
        int m;
        cin>>m;
        int k;
        cin>>k;
        int h;
        cin>>h;
        for(int i=0; i<n; i++)
        {
            int cur;
            cin>>cur;
            int diff = abs(h - cur);
            if (diff != 0 && diff%k == 0 && diff/k < m) {
                res++;
            }
        }
        
        resA.push_back(res);
 
    }
    for (int i : resA) {
        cout<<i<<endl;
    }
    
    return 0;
}
 