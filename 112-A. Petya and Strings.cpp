#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    cin>> str1 >> str2;
    int n = str1.length();
    for(int i =0; i<n; i++){
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
    }
    if( str1<str2) cout<<"-1\n";
    else if( str1>str2) cout<<"1\n";
    if( str1==str2) cout<<"0\n";
    
    return 0;     
}
