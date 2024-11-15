#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Tetrahedron= 4, Cube=6, Octahedron=8, Dodecahedron=12,Icosahedron=20;
    int n,ans=0;
    string str;
    cin>>n;
    while (n--)
    {
        cin>>str;
        if(str=="Tetrahedron")ans+=4;
        else if(str=="Cube")ans+=6;
        else if(str=="Octahedron")ans+=8;
        else if(str=="Dodecahedron")ans+=12;
        else if(str=="Icosahedron")ans+=20;
    }
    cout<<ans;
    
    
    return 0;
}