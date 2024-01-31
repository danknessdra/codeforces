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
        long long l, r, m;

        long long a, b, c;

        cin>>l>>r>>m;

        for(int i = l; i <= r; ++i) {
            if (m % i <= r - l) {
                b = r;
                c = b - m%i;
                a = i;
                if ((m + c - b)/a > 0) {
                    cout<<a<<" "<<b<<" "<<c<<endl;
                    break;
                }
            }
            if (abs(m % i - i) <= r - l) {
                b = l;
                c = b - (m % i - i);
                a = i;
                if ((m + c - b)/a > 0) {
                    cout<<a<<" "<<b<<" "<<c<<endl;
                    break;
                }
            }

        }

    }
}