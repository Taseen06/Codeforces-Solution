#include<bits/stdc++.h>
using namespace std;
int main() {

int t,ans=0;
cin>>t;

	while(t--){
	
	int h,m;
	cin>>h>>m;
	ans=(23-h)*60+(60-m);
	cout<<ans<<endl;	
	}
	return 0;
}