#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    bool ok=0;
    for(int i=1; i<s.size(); ++i)
    {
        if(s[i]!=s[0])
        {
            swap(s[i],s[0]);
            ok=1;
            break;
        }
    }
    if(ok) cout<<"YES\n"<<s<<endl;
    else cout<<"NO\n";
}
 
int main()
{
   
    int TCS = 1;
    cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        
        solve();
    }
}