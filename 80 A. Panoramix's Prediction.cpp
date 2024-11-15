#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, m;
    cin>>n>>m;
    int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    for(int i=0;i<=13;i++){
            if(n==prime[i] && m== prime[i+1]){
                    cout<<"YES";
                    return 0;
            }
                    
           
    }
    cout<<"NO";

    return 0;
}