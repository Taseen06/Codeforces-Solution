#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s=="abc" ||s=="acb"||s=="cba"||s=="bac")cout<<"YES\n";
        else cout<<"NO\n";
    }
}