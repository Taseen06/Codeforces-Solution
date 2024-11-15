
#include <bits/stdc++.h>
using namespace std;


int main() {
    

    int tc;
    cin >> tc;
    while (tc--) {
        string a, b;
        cin >> a >> b;
        swap(a.front(), b.front());
        cout << a << ' ' << b << '\n';
    }
    return 0;
}