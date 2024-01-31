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
    int n;
    cin>>n;
    unordered_map<string, pair<int, int>> map;
    while(n--){
        string location;
        int x, y;
        cin>>location>>x>>y;
        map.insert({location, {x, y}});
    }
    cin.ignore();
    string cur;
    while(getline(cin, cur)) {
        vector<string> list = split(cur);
        
    }

    
    return 0;
}

vector<string> split(string s) {
    string delimiter = " ";
    vector<string> res;
    size_t pos = 0;
    string token;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        res.push_back(token);
        s.erase(0, pos + delimiter.length());
    }
    return res;
}