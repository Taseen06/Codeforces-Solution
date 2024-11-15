#include <bits\stdc++.h>
using namespace std;
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int a, b, c;
    cin>>a>>b>>c;
    
    if( (a<b && a>c)||(a>b && a<c) ) cout<<a<<endl;
    else if( (a<b && b<c)||(a>b && c<b) ) cout<<b<<endl;
    else if( (a<c && b>c)||(a>c && b<c) ) cout<<c<<endl;
  }
}