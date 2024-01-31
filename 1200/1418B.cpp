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
        vector<int> arr(n, 0);
        vector<int> states(n,0);
        vector<int> sorted;
        for (int i  = 0; i < n; ++i) {
            cin>>arr[i];
        }

        for(int i = 0; i < n; ++i) {
            cin>>states[i];
            if (states[i] == 0) {
                sorted.push_back(arr[i]);
            }
        }

        sort(sorted.begin(), sorted.end(), greater<int>());
        int tmp = 0;
        for(int i = 0; i < n; ++i) {
            if (states[i] == 0) {
                arr[i] = sorted[tmp++];
            }
        }

        for (int i  = 0; i < arr.size(); ++i) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}