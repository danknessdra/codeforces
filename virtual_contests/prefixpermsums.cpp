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
    while(t--)
    {
        int n;
        cin>>n;
        vector<long>v(n - 1);
        for(int i=0; i<n - 1; i++)
        {
            cin>>v[i];
        }
        long sum = n * (n+1) / 2;
        long diff = sum;
        diff -= v[0];
        for(int i = 1; i < n-1; i++) {
            diff-=(v[i]-v[i-1]);
        }
        if(diff == 0) {
            cout<<"yes"<<endl;
        }
        else {
            cout<<"no"<<endl;
        }
        
        
 
    }
    return 0;
}
 