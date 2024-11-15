#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n) {
    if (n == 1 )
        return false;

    for (int i = 2; i < n; i++) {            
        if (n % i == 0)
            return false;
    }
    
      return true;
}

int main() {
    int n,m;
	cin>>n>>m;
	 int prime[m];


   
   	 for (int i = 1; i <= m; i++) {

        
        	if (isPrime(i))
		int l=prime.length();
           	 prime[l]=i;
		 l+=1;
    	}

	for(int i=0;i<=13;i++){
            if(n==prime[i] && m== prime[i+1]){
                    cout<<"YES";
                    return 0;
            }
                    
           
    }
    cout<<"NO";

    return 0;


}
