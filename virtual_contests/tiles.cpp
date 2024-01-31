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
        int res = 0;
        int n;
        cin>>n;
        vector<int> v(n);
        int k;
        cin>>k;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int freq = 0;
        int index = n - 1;
        int color = v[index];
        while (freq != k && index >= 0) {
            if (v[index] == color) freq++;
            index--;
        }
        if (freq != k) {
            cout<<"NO"<<endl;
        }
        else if (freq == k && index < 0) {
            cout<<"YES"<<endl;
        }
        else {
            if (color == v[0]) {
                index = v.size()-1;
            }
            color = v[0];
            freq = 0;
            for (int i = 0; i <= index + 1; ++i) {
                if (v[i] == color) {
                    freq++;
                    if(freq == k) break;
                }
            }
            if (freq == k) {
                cout<<"yes"<<endl;
            }
            else {
                cout<<"nO"<<endl;
            }
        }
        
 
    }
    
    return 0;
}
 