#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b,c;
    cin >> a >> b >> c;
    int condition1,condition2,condition3,condition4,condition5;
    condition1= a+b*c;
    condition2= a*(b+c);
    condition3= a*b*c;
    condition4= (a+b)*c;
    
    int max1, max2, max_of_all;
    max1= max(condition1,condition2);
    max2= max(condition3,condition4);
    max_of_all=max(max1, max2);
    if(a==b&& b==c && a==1) cout<<a+b+c;
    else if((a==b || b==c ||a==c) && (a==1|| b==1 ||c==1) &&  max_of_all < (a+c)*b ) cout<<(a+c)*b;
    else cout<<max_of_all;
   
    return 0;
}