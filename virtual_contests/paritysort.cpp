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
        vector<int> arr(n);
        vector<int> even;
        vector<int> odd;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if (arr[i]%2==0) {
                even.push_back(arr[i]);
            }
            else {
                odd.push_back(arr[i]);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        int x = 0;
        int y = 0;
        bool bad = false;
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i]%2==0) {
                arr[i] = even[x++];
            }
            else {
                arr[i] = odd[y++];
            }
            if (i != 0 && arr[i] > arr[i-1]) {
                cout<<"nO"<<endl;
                bad = true;
                break;
            }
        }
        if (!bad) {
            cout<<"yes"<<endl;
        }

 
    }
 
    return 0;
}
 