#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t; // Input the number of test cases
   while(t--){
     char h;
     cin>>h; //Input a single lowercase Latin character (letter)
    if(h=='c'||h=='o'||h=='d'||h=='e'||h=='f'||h=='r'||h=='s') cout<<"YES"<<endl; //if the letter contained in the word codeforces and the letter we entered then output yes
    else cout<<"NO"<<endl; //and if we don't see it  we output no
  }
  return 0;
}
