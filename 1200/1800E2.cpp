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
        int n;
        cin>>n;
        int k;
        cin>>k;
        string s;
        cin>>s;
        string t;
        cin>>t;
        vector<int> cnt(26,0);
        int same = 0;
        bool res = true;
        for (int i = 0; i < s.size(); ++i) {
            if (i >= k || i + k < s.size()) {
                cnt[s[i] - 'a']++;
                cnt[t[i] - 'a']--;
            }
            else {
                res &= s[i] == t[i];
            }
        }
        for (int c : cnt) {
            if (c == 0) {
                same++;
            }
        }
        cout<<(res && same == 26 ? "yes": "no")<<endl;
    }
}