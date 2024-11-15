#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int C=0;
        if(b>a)C++;
        if (c>a)C++;
        if (d>a)C++;
        cout <<C<<endl;

    }
    return 0;
}
