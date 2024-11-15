#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, WinC=0,WinM=0;
   cin >> n;
   while(n--){
    int m,c;
    cin >> m >> c;
    if(m>c)WinM++;
    else if(c>m)WinC++;
   }
   if(WinC>WinM)cout<<"Chris";
   else if(WinC<WinM)cout<<"Mishka";
   else cout<<"Friendship is magic!^^";
        
    return 0;
}