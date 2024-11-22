

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        int a = 0, b = 0;
        for (int i = 0; i < str.size(); i++) {
            a += (str[i] == 'A');
            b += (str[i] == 'B');
        }
        if (a > b) cout << 'A' << '\n';
        else cout << 'B' << '\n';
    }
    return 0;
}