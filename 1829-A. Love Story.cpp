#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   string m="codeforces";
   while(t--){
      string s;
      cin>>s;
   
      int indices=0;
      
      for(int i=0;i<10;i++){
         if(s[i]!=m[i]) indices++;
      }

   
   cout<<indices<<endl;
   }
}