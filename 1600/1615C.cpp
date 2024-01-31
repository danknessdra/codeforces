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
    vector<int> res;
    while(t--)
    {
        int n;
        cin>>n;
        string init;
        string want;
        cin>>init;
        cin>>want;
        string inverted(n, ' '); 
        for (int i = 0; i < n; ++i) {
            inverted[i] = init[i] == '1' ? '0' : '1';
        }
        int c = 0;
        int x = 0;
        for(int i = 0; i < n; ++i) {
            if(init[i] != want[i]) {
                c++;
            }
        }
            for(int i = 0; i < n; ++i) {
                if(inverted[i] != want[i]) {
                    x++;
                }   
            }
            if (c%2!=0 && x%2==0) {
                res.push_back(-1);
            }
            else {
                res.push_back(min(x,c));
            }
        
 
    }
    for(int i : res) {
        cout<<i<<endl;
    }
    return 0;
}
 