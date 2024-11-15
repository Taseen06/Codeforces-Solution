#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    long long int k,r;
    cin>>k>>r;
    for(long long int i=1;i<=9;i++)
    {
        if((k*i)%10==r || (k*i)%10==0)
        {
            cout<<i<<endl;
            return 0;
        }
	else continue;
    }
    
   
    return 0;
}
