#include<iostream>
using namespace std;
 
int main(){
 
int t;
cin>>t;
 
while(t--){
    int a,b;
    cin>>a>>b;
    int c=b;
    
    cout<<(c-a)+(b-c)<<endl;
}
 
return 0;
}