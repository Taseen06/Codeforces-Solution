#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int a, b;
    cin >> a >> b;

    long long int sum = a + b;

    if (sum & 1)
        cout << "Alice\n";
    else
        cout << "Bob\n";
}

int main()
{
    
    long long int T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }

}