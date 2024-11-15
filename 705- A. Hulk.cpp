#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3,s4, ans;
    s1= "I hate" ;
    s2= "I love";
    s3=" that ";
    s4=" it ";

   int n;
   cin>>n;
   for(int i=1; i<=n;i++){
    if(i==1)cout<<s1;
    else if(i%2==0)cout<<s3<<s2;
    else if(i%2==1)cout<<s3<<s1;
   }
    cout<<s4;
        
    return 0;
}