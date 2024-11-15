#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int ans,first_digit,last_digit;
      last_digit= n%10;
      first_digit=(n/10)%10;
      ans=first_digit+last_digit;
      cout<<ans<<endl;

    }
  return 0;
}