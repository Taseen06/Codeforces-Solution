#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, ER=0;
    cin>>n;
    while(n--){
        int p,q;
        cin>>p>>q;
        if(q-p>=2)ER++;
    }
    cout<<ER;
    return 0;
}