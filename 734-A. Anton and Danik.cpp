#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, countA=0,countD=0;
    cin>>n;
    string s;
    cin>> s;
    
    while(n--){
        if(s[n]=='A')countA++;
        else if(s[n]=='D')countD++;   
    }
    if(countA>countD)cout<<"Anton\n";
    else if(countA<countD)cout<<"Danik\n";
    else cout<<"Friendship\n";
}