#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
    cin.tie(0);
    cout.tie(0);
}
int main() {
    int num1, num2;
    cin>>num1>>num2;
    int num1rev = 0;
    int num2rev = 0;
    while (num1 != 0) {
        num1rev*=10;
        num1rev += num1%10;
        num1/=10;
    }
    while (num2 != 0) {
        num2rev*=10;
        num2rev += num2%10;
        num2/=10;
    }
    if (num1rev > num2rev) cout<<num1rev<<endl;
    else cout<<num2rev<<endl;
}